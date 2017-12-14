type t;

[@bs.module "react-test-renderer"] [@bs.val] external create :
  ReasonReact.reactElement => t = "";

[@bs.send] external toJSON :
  t => Js.Json.t = "";
