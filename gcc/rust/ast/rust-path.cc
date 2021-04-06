#include "rust-path.h"

DEBUG_FUNCTION void
debug(const Rust::AST::PathIdentSegment &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::PathExprSegment &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::PathPattern &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::PathInExpression &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::TypePathSegment &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::TypePathSegmentGeneric &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::TypePathSegmentFunction &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::TypePath &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::QualifiedPathInExpression &p)
{
        std::cerr << p.as_string() << std::endl;
}


DEBUG_FUNCTION void
debug(const Rust::AST::QualifiedPathInType &p)
{
        std::cerr << p.as_string() << std::endl;
}

