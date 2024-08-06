#include <boost/math/special_functions/fibonacci.hpp>
#include <catch2/catch_all.hpp>
import mathlib;

TEST_CASE("nth fibonacci") {
  using ull = unsigned long long;
  for (int i = 0; i < 20; ++i) {
    REQUIRE(mathlib::fib_n(i) == boost::math::fibonacci<ull>(i));
  }
}

TEST_CASE("Fermat's primality test") {
  // Fermat pseudoprimes
  CHECK(mathlib::primality_test_fermat(60701, 10) == false);
  CHECK(mathlib::primality_test_fermat(60787, 10) == false);
  // actual primes
  CHECK(mathlib::primality_test_fermat(611951, 10) == true);
  CHECK(mathlib::primality_test_fermat(611953, 10) == true);
}