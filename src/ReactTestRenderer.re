type t;

type testInstance;

[@bs.module "react-test-renderer"] [@bs.val]
external create : ReasonReact.reactElement => t = "";

[@bs.send] external toJSON : t => Js.Json.t = "";

[@bs.get] external root : t => testInstance = "";

[@bs.send]
external find : (testInstance, testInstance => bool) => testInstance = "";

[@bs.send]
external findAll : (testInstance, testInstance => bool) => array(testInstance) =
  "";

[@bs.get] external instance : testInstance => 't = "";

[@bs.get] external type_ : testInstance => 't = "type";

[@bs.get] external props : testInstance => 'p = "";

[@bs.get] external parent : testInstance => testInstance = "";

[@bs.get] external children : testInstance => array(testInstance) = "";
