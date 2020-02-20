type t;

[@bs.module "react-test-renderer/shallow"] [@bs.val] external createRenderer :
  unit => t = "createRenderer";

[@bs.send] external render :
  t => ReasonReact.reactElement => option(ReasonReact.reactElement) = "render";

[@bs.send] external getRenderOutput :
  t => option(ReasonReact.reactElement) = "getRenderOutput";

[@bs.send] external unmount :
  t => unit = "unmount";

let renderWithRenderer = render(createRenderer());
