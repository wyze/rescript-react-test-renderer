# bs-react-test-renderer

[![Build Status][travis-image]][travis-url]
[![npm][npm-image]][npm-url]
[![dependencies][deps-image]][deps-url]
[![devDependencies][depsdev-image]][depsdev-url]

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

### [v1.1.0](https://github.com/reasonml-community/bs-react-test-renderer/releases/tag/v1.1.0) (2017-12-14)

* [[`63a4beca5c`](https://github.com/reasonml-community/bs-react-test-renderer/commit/63a4beca5c)] - Cleanup project to cut a final release for React 15 support (Neil Kistner)
* [[`29e4199ea8`](https://github.com/reasonml-community/bs-react-test-renderer/commit/29e4199ea8)] - Turn on super-errors; clean up package.json & bsconfig (Cheng Lou)
* [[`e09b25baf3`](https://github.com/reasonml-community/bs-react-test-renderer/commit/e09b25baf3)] - package.json: BuckleTypes -\> reasonml-community (Glenn Slotte)
* [[`6b04b13121`](https://github.com/reasonml-community/bs-react-test-renderer/commit/6b04b13121)] - bump bs-platform version (Cheng Lou)
* [[`2fffc9f752`](https://github.com/reasonml-community/bs-react-test-renderer/commit/2fffc9f752)] - BuckleTypes -\> reasonml-community (Glenn Slotte)

## License

MIT © [Neil Kistner](https://neilkistner.com)

[travis-image]: https://img.shields.io/travis/reasonml-community/bs-react-test-renderer.svg?style=flat-square
[travis-url]: https://travis-ci.org/reasonml-community/bs-react-test-renderer

[npm-image]: https://img.shields.io/npm/v/bs-react-test-renderer.svg?style=flat-square
[npm-url]: https://npm.im/bs-react-test-renderer

[deps-image]: https://img.shields.io/david/reasonml-community/bs-react-test-renderer.svg?style=flat-square
[deps-url]: https://david-dm.org/reasonml-community/bs-react-test-renderer

[depsdev-image]: https://img.shields.io/david/dev/reasonml-community/bs-react-test-renderer.svg?style=flat-square
[depsdev-url]: https://david-dm.org/reasonml-community/bs-react-test-renderer?type=dev
