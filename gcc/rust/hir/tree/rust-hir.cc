#include "rust-hir.h"


DEBUG_FUNCTION void
debug(const Rust::HIR::Stmt &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::HIR::Item &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::HIR::Expr &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::HIR::ExprWithoutBlock &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::HIR::IdentifierExpr &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::HIR::Pattern &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::HIR::Type &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::HIR::TypeNoBounds &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::HIR::TypeParamBound &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::HIR::Lifetime &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::HIR::GenericParam &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::HIR::LifetimeParam &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::HIR::MacroItem &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::HIR::TraitItem &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::HIR::PathExpr &p) {
  std::cerr << p.as_string() << std::endl;
}

