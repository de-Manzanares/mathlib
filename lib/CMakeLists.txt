add_library(mathlib)

target_sources(mathlib
        PUBLIC
        ${PROJECT_SOURCE_DIR}/src/primality_test_fermat.cpp
        PUBLIC
        FILE_SET CXX_MODULES
        BASE_DIRS ${PROJECT_SOURCE_DIR}/lib
        FILES
        ${PROJECT_SOURCE_DIR}/lib/mathlib.cppm
        ${PROJECT_SOURCE_DIR}/lib/number_theory.cppm
        ${PROJECT_SOURCE_DIR}/lib/number_theory/fibonacci.cppm
        ${PROJECT_SOURCE_DIR}/lib/number_theory/primes.cppm)
