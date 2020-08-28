type t;

[@bs.module "react-test-renderer"] [@bs.val] external create :
  React.element => t = "create";

[@bs.send] external toJSON :
  t => Js.Json.t = "toJSON";
