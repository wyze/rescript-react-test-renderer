let component = ReasonReact.statelessComponent("DeepTester");

let make = (_children) => {
  ...component,
  render: (_self) =>
    <div>
      <p> (ReasonReact.stringToElement("Deep")) </p>
      <p> (ReasonReact.stringToElement("Tester")) </p>
    </div>
};
