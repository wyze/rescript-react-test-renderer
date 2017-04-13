module Tester = {
  include ReactRe.Component;
  let name = "Tester";

  type props = ();

  let render _ =>
    <div>(ReactRe.stringToElement "Tester")</div>;
};

include ReactRe.CreateComponent Tester;

let createElement = wrapProps ();
