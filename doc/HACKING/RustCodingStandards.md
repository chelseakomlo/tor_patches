## Coding Standards for Writing Rustin Tor


### Importing Crates

Default to not including third-party crates.

### Memory management

- Allocate/free API

Rust modules will need to expose allocate/free functions. This is a pattern
we already follow in Tor.

- Calling Drop

Drop should get called to clean up resources

### Defining integration points between Rust and C

- FFI api functions should be in their own file

FFI functions will use imports not necessary in pure Rust code, so we prefer
keeping these separate.

- Do not include logic in Rust FFI functions

Your Rust module should expose the same functionality via its Rust API as well
as its C API. The Rust/C FFI should be purely for translation purposes.

- FFI functions should be wrapped with unsafe

### Handling errors

- Panics should kill the current thread

### Linting and coding style

- Use rustfmt to format your code

We have a rustfmt.toml file which defines which styles we have defined for Tor.

TODO: Add automated linting, Rust Clippy is a good option
