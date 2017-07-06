open Jest;
open ExpectJs;

external toObject :
  ReactTestRenderer.t => Js.t {..} = "%identity";

let _ =

describe "reactTestRenderer" (fun _ => {
  test "create returns ReactTestInstance" (fun _ => {
    let component = ReactTestRenderer.create <Tester />;

    expect (toObject component) |> toContainProperties [| "_component" |];
  });

  test "toJSON returns test rendered JSON" (fun _ => {
    let component = ReactTestRenderer.create <Tester />;
    let json = ReactTestRenderer.toJSON component;
    let expected = Js.Json.parseExn {|
      {
        "type": "div",
        "props": {},
        "children": [ "Tester" ]
      }
    |};

    expect json |> toEqual expected;
  });
});
