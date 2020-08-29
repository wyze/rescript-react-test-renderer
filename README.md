# bs-react-test-renderer

[![Build Status][actions-image]][actions-url]
[![npm][npm-image]][npm-url]
[![dependencies][deps-image]][deps-url]

> [BuckleScript](//github.com/BuckleScript/bucklescript) bindings for [react-test-renderer](//github.com/facebook/react/tree/master/packages/react-test-renderer).

## Installation

```sh
$ yarn add --dev bs-react-test-renderer

# or..

$ npm install --save-dev bs-react-test-renderer
```

## Usage

#### Add to `bsconfig.json`

```json
{
  "bs-dev-dependencies": [
    "bs-react-test-renderer"
  ]
}
```

#### With [`bs-jest`](//github.com/reasonml-community/bs-jest)

```ocaml
/* Component_test.re */

open Jest;

describe("Component", () => {
  open ExpectJs;

  test("renders", () => {
    let component = ReactShallowRenderer.renderWithRenderer(<Component />);

    expect(Js.Undefined.return(component)) |> toBeDefined;
  });
});
```

## Examples

See [`src/__tests__`](src/__tests__) for some examples.

For examples with Snapshot testing with [`bs-jest`](//github.com/reasonml-community/bs-jest), see [`reason-calculator`](//github.com/wyze/reason-calculator).

## Development

```sh
$ git clone https://github.com/reasonml-community/bs-react-test-renderer.git
$ cd bs-react-test-renderer
$ yarn # or `npm install`
```

## Build

```sh
$ yarn build
```

## Test

```sh
$ yarn test
```

## Change Log

> [Full Change Log](changelog.md)

### [v3.0.0](https://github.com/reasonml-community/bs-react-test-renderer/releases/tag/v3.0.0) (2020-08-28)

* Upgrade to my latest release tools ([@wyze](https://github.com/wyze) in [#19](https://github.com/reasonml-community/bs-react-test-renderer/pull/19))
* Upgrade dependencies ([@wyze](https://github.com/wyze) in [#18](https://github.com/reasonml-community/bs-react-test-renderer/pull/18))
* Migrate to JSX v3 ([@rusty-key](https://github.com/rusty-key) in [#10](https://github.com/reasonml-community/bs-react-test-renderer/pull/10))
* Upgrade CI to use Current and LTS Node versions ([@wyze](https://github.com/wyze) in [#11](https://github.com/reasonml-community/bs-react-test-renderer/pull/11))
* Fixes Bucklescript v7 warnings ([@superherointj](https://github.com/superherointj) in [#4](https://github.com/reasonml-community/bs-react-test-renderer/pull/4))

## License

MIT © [Neil Kistner](https://neilkistner.com)

[actions-image]: https://img.shields.io/github/workflow/status/reasonml-community/bs-react-test-renderer/CI.svg?style=flat-square
[actions-url]: https://github.com/reasonml-community/bs-react-test-renderer/actions

[npm-image]: https://img.shields.io/npm/v/bs-react-test-renderer.svg?style=flat-square
[npm-url]: https://npm.im/bs-react-test-renderer

[deps-image]: https://img.shields.io/david/reasonml-community/bs-react-test-renderer.svg?style=flat-square
[deps-url]: https://david-dm.org/reasonml-community/bs-react-test-renderer
