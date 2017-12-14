open Jest;

external toObject : option(ReasonReact.reactElement) => _ = "%identity";

let element = {
  "type": "div",
  "key": Js.null,
  "ref": Js.null,
  "props": Js.Obj.empty(),
  "_owner": Js.null,
  "_store": Js.Obj.empty()
};

describe("reactShallowRenderer", () => {
  open ExpectJs;

  test("createRenderer", () => {
    let renderer = ReactShallowRenderer.createRenderer();

    expect(Js.Undefined.return(renderer)) |> toBeDefined;
  });

  test("render accepts renderer", () => {
    let renderer = ReactShallowRenderer.createRenderer();
    let render = ReactShallowRenderer.render(renderer);

    expect(Js.typeof(render)) |> toBe("function");
  });

  test("render will render a component", () => {
    let renderer = ReactShallowRenderer.createRenderer();
    let component = ReactShallowRenderer.render(renderer, <Tester />) |> toObject;

    expect(component) |> toMatchObject(element);
  });

  test("renderWithRenderer will render a component", () => {
    let component = ReactShallowRenderer.renderWithRenderer(<Tester />) |> toObject;

    expect(component) |> toMatchObject(element);
  });

  test("getRenderOutput returns element", () => {
    let renderer = ReactShallowRenderer.createRenderer();

    ReactShallowRenderer.render(renderer, <Tester />) |> ignore;

    let component = ReactShallowRenderer.getRenderOutput(renderer) |> toObject;

    expect(component) |> toMatchObject(element);
  });

  test("unmount removes the node", () => {
    let renderer = ReactShallowRenderer.createRenderer();

    ReactShallowRenderer.render(renderer, <Tester />) |> ignore;
    ReactShallowRenderer.unmount(renderer);

    let component = ReactShallowRenderer.getRenderOutput(renderer) |> toObject;

    expect(Js.Null.return(component)) |> toBeNull;
  });
});
