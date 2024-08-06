#include <boost/math/special_functions/fibonacci.hpp>
#include <catch2/catch_all.hpp>
import mathlib;

TEST_CASE("nth fibonacci") {
  using ull = unsigned long long;

  for (int i = 0; i < 20; ++i) {
    REQUIRE(mathlib::fib_n(i) == boost::math::fibonacci<ull>(i));
  }
}
