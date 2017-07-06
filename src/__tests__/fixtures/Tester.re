let component = ReasonReact.statelessComponent "Tester";

let make _children => {
  ...component,
  render: fun _self => <div> (ReasonReact.stringToElement "Tester") </div>
};
