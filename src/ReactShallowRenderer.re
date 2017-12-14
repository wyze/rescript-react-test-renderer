type t;

[@bs.module "react-test-renderer/shallow"] [@bs.val] external createRenderer :
  unit => t = "";

[@bs.send] external render :
  t => ReasonReact.reactElement => option(ReasonReact.reactElement) = "";

[@bs.send] external getRenderOutput :
  t => option(ReasonReact.reactElement) = "";

[@bs.send] external unmount :
  t => unit = "";

let renderWithRenderer = render(createRenderer());
