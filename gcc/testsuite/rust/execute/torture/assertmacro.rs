#![feature(rustc_attrs)]
#[rustc_builtin_macro]
macro_rules! assert {
    ($cond:expr $(,)?) => {{ /* built-in */ }};
    ($cond:expr, $($arg:tt)+) => {{ /* built-in */ }};
}

// #[doc = include_str!("../../core/src/macros/panic.md")]
// #[macro_export]
#[rustc_builtin_macro(std_panic)]
// #[stable(feature = "rust1", since = "1.0.0")]
// #[allow_internal_unstable(edition_panic)]
// #[cfg_attr(not(test), rustc_diagnostic_item = "std_panic_macro")]
macro_rules! panic {
    // Expands to either `$crate::panic::panic_2015` or `$crate::panic::panic_2021`
    // depending on the edition of the caller.
    ($($arg:tt)*) => {
        /* compiler built-in */
    };
}

extern "C" {
    fn abort();
}

fn panic() { unsafe {abort();}}

macro_rules! column {
    () => {{}};
}

fn goal (cond : bool) {
    if (!cond){
       unsafe {abort()};
    }
}

fn main () -> i32 {
    assert! (false);
    0
}
