#include "rust-ast.h"
#include "rust-expr.h"
#include "rust-item.h"
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


DEBUG_FUNCTION void
debug(const Rust::AST::ExprWithBlock &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::LiteralExpr &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::AttrInputLiteral &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::MetaItemLitExpr &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::MetaItemPathLit &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::OperatorExpr &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::BorrowExpr &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::DereferenceExpr &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::ErrorPropagationExpr &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::NegationExpr &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::ArithmeticOrLogicalExpr &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::ComparisonExpr &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::LazyBooleanExpr &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::TypeCastExpr &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::AssignmentExpr &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::CompoundAssignmentExpr &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::GroupedExpr &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::ArrayElems &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::ArrayElemsValues &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::ArrayElemsCopied &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::ArrayExpr &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::ArrayIndexExpr &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::TupleExpr &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::TupleIndexExpr &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::StructExpr &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::StructExprStruct &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::StructExprField &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::StructExprFieldIdentifier &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::StructExprFieldWithVal &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::StructExprFieldIdentifierValue &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::StructExprFieldIndexValue &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::StructExprStructFields &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::StructExprStructBase &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::StructExprTuple &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::StructExprUnit &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::EnumVariantExpr &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::EnumExprField &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::EnumExprFieldIdentifier &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::EnumExprFieldWithVal &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::EnumExprFieldIdentifierValue &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::EnumExprFieldIndexValue &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::EnumExprStruct &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::EnumExprTuple &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::EnumExprFieldless &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::CallExpr &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::MethodCallExpr &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::FieldAccessExpr &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::ClosureExpr &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::ClosureExprInner &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::BlockExpr &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::ClosureExprInnerTyped &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::ContinueExpr &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::BreakExpr &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::RangeExpr &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::RangeFromToExpr &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::RangeFromExpr &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::RangeToExpr &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::RangeFullExpr &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::RangeFromToInclExpr &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::RangeToInclExpr &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::ReturnExpr &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::UnsafeBlockExpr &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::LoopLabel &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::BaseLoopExpr &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::LoopExpr &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::WhileLoopExpr &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::WhileLetLoopExpr &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::ForLoopExpr &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::IfExpr &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::IfExprConseqElse &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::IfExprConseqIf &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::IfLetExpr &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::IfExprConseqIfLet &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::IfLetExprConseqElse &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::IfLetExprConseqIf &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::IfLetExprConseqIfLet &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::MatchCase &p)
{
        std::cerr << p.as_string() << std::endl;
}

#if 0
DEBUG_FUNCTION void
debug(const Rust::AST::MatchCaseBlockExpr &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::MatchCaseExpr &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::MatchExpr &p)
{
        std::cerr << p.as_string() << std::endl;
}

#endif

DEBUG_FUNCTION void
debug(const Rust::AST::AwaitExpr &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::AsyncBlockExpr &p)
{
        std::cerr << p.as_string() << std::endl;
}

