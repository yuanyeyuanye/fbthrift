/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "thrift/compiler/test/fixtures/qualified/gen-cpp/module0_types.h"

namespace MODULE0 {

struct module0_constants {
  static Struct const& c0();
  static std::vector<Enum>  const& e0s();
};

class __attribute__((__deprecated__("module0Constants suffers from the 'static initialization order fiasco' (https://isocpp.org/wiki/faq/ctors#static-init-order) and may CRASH your program. Instead, use module0_constants::CONSTANT_NAME()"))) module0Constants {
public:
  module0Constants();

  Struct c0;
  std::vector<Enum>  e0s;
};

} // namespace
