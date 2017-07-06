type t;

external createRenderer :
  unit => t = "" [@@bs.val] [@@bs.module "react-test-renderer/shallow"];

external render :
  t => ReasonReact.reactElement => option ReasonReact.reactElement = "" [@@bs.send];

external getRenderOutput :
  t => option ReasonReact.reactElement = "" [@@bs.send];

external unmount :
  t => unit = "" [@@bs.send];

let renderWithRenderer = render (createRenderer ());
