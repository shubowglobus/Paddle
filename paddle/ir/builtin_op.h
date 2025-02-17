// Copyright (c) 2023 PaddlePaddle Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include "paddle/ir/op_base.h"

namespace ir {
///
/// \brief This macro is used to get a list of all built-in OPs in this file.
/// The built-in Dialect will use this macro to quickly register all built-in
/// OPs.
///
#define GET_BUILT_IN_OP_LIST ir::GetParameterOp, ir::SetParameterOp

///
/// \brief GetParameterOp: OpResult = GetParameterOp({StrAttribute,
/// StrAttribute})
///
class GetParameterOp : public ir::Op<GetParameterOp> {
 public:
  using Op::Op;

  static const char* name() { return "GetParameterOp"; }

  static uint32_t attributes_num() { return 1; }

  static const char* attributes_name_[];
};

///
/// \brief GetParameterOp: SetParameterOp(OpOperand, {StrAttribute,
/// StrAttribute})
///
class SetParameterOp : public ir::Op<SetParameterOp> {
 public:
  using Op::Op;

  static const char* name() { return "SetParameterOp"; }

  static uint32_t attributes_num() { return 1; }

  static const char* attributes_name_[];
};

}  // namespace ir
