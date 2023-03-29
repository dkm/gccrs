#![feature(rustc_attrs)]
#[rustc_builtin_macro]
macro_rules! assert {
    ($cond:expr $(,)?) => {{ /* built-in */ }};
    ($cond:expr, $($arg:tt)+) => {{ /* built-in */ }};
}

fn panic() {}

fn main () {
    assert! (true);
}
