add_executable(test-number-theory)
target_sources(test-number-theory
        PUBLIC
        number-theory.cxx)
target_link_libraries(test-number-theory
        PUBLIC
        mathlib
        Catch2::Catch2WithMain
        gmp
        gmpxx)

include(CTest)
include(Catch)

add_test(NAME TestNumberTheory COMMAND test-number-theory)
