## Building Tor with Rust

We are currently testing migrating Tor functionality to Rust.

We use Rustup to manage testing across different Rust compilers. See here:
https://github.com/rust-lang-nursery/rustup.rs

To install Rustup:

```
 curl https://sh.rustup.rs -sSf | sh
```

Then continue with the default installation.

We compile with Rust nightly. To install:

```
rustup install nightly && rustup default nightly
```

and,

```
source $HOME/.cargo/env
```
