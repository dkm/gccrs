#include "rust-hir.h"
#include "rust-hir-macro.h"

DEBUG_FUNCTION void
debug(const Rust::HIR::AttrInput &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::HIR::TokenTree &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::HIR::MacroMatch &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::HIR::Token &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::HIR::DelimTokenTree &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::HIR::PathSegment &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::HIR::SimplePathSegment &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::HIR::SimplePath &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::HIR::MetaItemInner &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::HIR::AttrInputMetaItemContainer &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::HIR::MetaItem &p) {
  std::cerr << p.as_string() << std::endl;
}

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
debug(const Rust::HIR::InherentImplItem &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::HIR::TraitImplItem &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::HIR::PathExpr &p) {
  std::cerr << p.as_string() << std::endl;
}

