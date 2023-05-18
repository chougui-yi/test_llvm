# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/test/test_llvm/build/antlr4_runtime/src/antlr4_runtime"
  "/test/test_llvm/build/antlr4_runtime/src/antlr4_runtime-build"
  "/test/test_llvm/build/antlr4_runtime"
  "/test/test_llvm/build/antlr4_runtime/tmp"
  "/test/test_llvm/build/antlr4_runtime/src/antlr4_runtime-stamp"
  "/test/test_llvm/build"
  "/test/test_llvm/build/antlr4_runtime/src/antlr4_runtime-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/test/test_llvm/build/antlr4_runtime/src/antlr4_runtime-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/test/test_llvm/build/antlr4_runtime/src/antlr4_runtime-stamp${cfgdir}") # cfgdir has leading slash
endif()
