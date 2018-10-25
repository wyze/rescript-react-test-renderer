open Jest;

external toObject : ReactTestRenderer.t => _ = "%identity";

external instanceToObject : ReactTestRenderer.testInstance => _ = "%identity";

describe(
  "reactTestRenderer",
  () => {
    open ExpectJs;
    test(
      "create returns ReactTestInstance",
      () => {
        let component = ReactTestRenderer.create(<Tester />);
        expect(toObject(component))
        |> toContainProperties([|
             "root",
             "toJSON",
             "toTree",
             "update",
             "unmount",
             "getInstance"
           |])
      }
    );
    test(
      "toJSON returns test rendered JSON",
      () => {
        let component = ReactTestRenderer.create(<Tester />);
        let json = ReactTestRenderer.toJSON(component);
        let expected =
          Js.Json.parseExn(
            {|
      {
        "type": "div",
        "props": {},
        "children": [ "Tester" ]
      }
    |}
          );
        expect(json) |> toEqual(expected)
      }
    );
    test(
      "root returns test instance",
      () => {
        let component = ReactTestRenderer.create(<Tester />);
        let root = Js.Undefined.return(ReactTestRenderer.root(component));
        expect(root) |> toBeDefined
      }
    );
    test(
      "find returns a child instance",
      () => {
        let component = ReactTestRenderer.create(<Tester />);
        let found =
          ReactTestRenderer.find(
            component |> ReactTestRenderer.root,
            (ti) => ReactTestRenderer.type_(ti) === "div"
          );
        expect(ReactTestRenderer.type_(found)) |> toBe("div")
      }
    );
    test(
      "findAll returns an array of child instances",
      () => {
        let component = ReactTestRenderer.create(<DeepTester />);
        let found =
          ReactTestRenderer.findAll(
            component |> ReactTestRenderer.root,
            (ti) => ReactTestRenderer.type_(ti) === "p"
          );
        expect(found) |> toHaveLength(2)
      }
    )
  }
);
