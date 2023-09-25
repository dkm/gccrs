#![feature(rustc_attrs)]
#![feature(intrinsics)]

#[rustc_builtin_macro]
macro_rules! assert {
    ($cond:expr $(,)?) => {{ /* built-in */ }};
    ($cond:expr, $($arg:tt)+) => {{ /* built-in */ }};
}

extern "rust-intrinsic" {
    fn abort();
}

//
// fn panic() { unsafe {abort();}}

macro_rules! column {
    () => {{}};
}

// fn goal (cond : bool) {
//     if (!cond){
//        unsafe {abort()};
//     }
// }

fn main () -> i32 {
    assert! (false);
    0
}
