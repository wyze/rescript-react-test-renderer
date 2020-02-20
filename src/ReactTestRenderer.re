type t;

[@bs.module "react-test-renderer"] [@bs.val] external create :
  ReasonReact.reactElement => t = "create";

[@bs.send] external toJSON :
  t => Js.Json.t = "toJSON";
