#include "rust-ast.h"
#include "rust-macro.h"

DEBUG_FUNCTION void
debug(const Rust::AST::TokenTree &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::AST::MacroMatch &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::AST::Token &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::AST::PathSegment &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::AST::SimplePathSegment &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::AST::SimplePath &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::AST::AttrInput &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::AST::MetaItemInner &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::AST::AttrInputMetaItemContainer &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::AST::DelimTokenTree &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::AST::MetaItem &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::AST::Stmt &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::AST::Item &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::AST::Expr &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::AST::ExprWithoutBlock &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::AST::IdentifierExpr &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::AST::Pattern &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::AST::Type &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::AST::TypeNoBounds &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::AST::TypeParamBound &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::AST::Lifetime &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::AST::GenericParam &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::AST::LifetimeParam &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::AST::MacroItem &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::AST::TraitItem &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::AST::InherentImplItem &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::AST::TraitImplItem &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::AST::ExternalItem &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::AST::MacroInvocationSemi &p) {
  std::cerr << p.as_string() << std::endl;
}

DEBUG_FUNCTION void
debug(const Rust::AST::PathExpr &p) {
  std::cerr << p.as_string() << std::endl;
}
