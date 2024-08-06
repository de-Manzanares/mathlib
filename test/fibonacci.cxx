#include <catch2/catch_all.hpp>

import mathlib;

TEST_CASE("nth fibonacci") {
  using ull = unsigned long long;
  using namespace mathlib::fibonacci;

  std::vector<ull> fibs{};
  fibs.reserve(20);

  for (int i = 0; i < 90; ++i) {
    fibs.push_back(fib_n(i));
  }
  CHECK(fibs == std::vector<ull>{0,   1,   1,   2,    3,    5,   8,
                                 13,  21,  34,  55,   89,   144, 233,
                                 377, 610, 987, 1597, 2584, 4181});
}
