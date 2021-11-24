// Copyright (C) 2020-2021 Free Software Foundation, Inc.

// This file is part of GCC.

// GCC is free software; you can redistribute it and/or modify it under
// the terms of the GNU General Public License as published by the Free
// Software Foundation; either version 3, or (at your option) any later
// version.

// GCC is distributed in the hope that it will be useful, but WITHOUT ANY
// WARRANTY; without even the implied warranty of MERCHANTABILITY or
// FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
// for more details.

// You should have received a copy of the GNU General Public License
// along with GCC; see the file COPYING3.  If not see
// <http://www.gnu.org/licenses/>.

#ifndef RUST_HIR_TYPE_CHECK_BASE
#define RUST_HIR_TYPE_CHECK_BASE

#include "rust-diagnostics.h"
#include "rust-hir-type-check.h"
#include "rust-name-resolver.h"
#include "rust-hir-visitor.h"
#include "rust-hir-map.h"
#include "rust-backend.h"

namespace Rust {
namespace Resolver {

class TraitReference;

// base class to allow derivatives to overload as needed
class TypeCheckBase : public HIR::HIRFullVisitorBase
{
public:
  using Rust::HIR::HIRFullVisitorBase::visit;

  virtual ~TypeCheckBase () {}

protected:
  TypeCheckBase ()
    : mappings (Analysis::Mappings::get ()), resolver (Resolver::get ()),
      context (TypeCheckContext::get ())
  {}

  TraitReference *resolve_trait_path (HIR::TypePath &);

  Analysis::Mappings *mappings;
  Resolver *resolver;
  TypeCheckContext *context;
};

} // namespace Resolver
} // namespace Rust

#endif // RUST_HIR_TYPE_CHECK_BASE
