add_executable(test-fibonacci)
target_sources(test-fibonacci
        PUBLIC
        fibonacci.cxx)
target_link_libraries(test-fibonacci
        PUBLIC
        mathlib
        Catch2::Catch2WithMain)

include(CTest)
include(Catch)

add_test(NAME TestFibonacci COMMAND test-fibonacci)
