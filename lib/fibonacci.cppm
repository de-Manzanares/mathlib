module;

#include <stdexcept>

export module fibonacci;

namespace mathlib::fibonacci {

using ull = unsigned long long;

/**
 * @return The nth fibonacci number
 * @details fib_n[0,1,2] == [0,1,1]
 * (0,1,1,...)
 * @note boost and gmp have way cooler algorithms lol
 */
export constexpr ull fib_n(const ull n) {
  ull counter = 1;
  ull a{0};
  ull b{1};
  ull c{};
  switch (n) {
  case 0:
    return a;
  case 1:
    return b;
  case 2:
    return a + b;
  default: {
  }
  }
  while (counter < n) {
    c = a + b;
    if (c < b) {
      throw std::overflow_error("fibonacci overflow");
    }
    a = b;
    b = c;
    ++counter;
  }
  return c;
}

} // namespace mathlib::fibonacci
