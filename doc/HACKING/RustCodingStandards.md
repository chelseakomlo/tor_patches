## Coding Standards for Writing Rust in Tor

- Panics should kill the current thread
- Default to not including more crates
- Drop should get called to clean up resources

TODO: Add automated linting, Rust Clippy is a good option

### Defining integration points between Rust and C

TODO: define best practices for Rust/C APIs.

There will be upcoming changes in the future, let's keep following that
movement here:

https://github.com/rust-lang/rust-roadmap/issues/14
