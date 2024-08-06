module;

#include <stdexcept>

export module fibonacci;

using ull = unsigned long long;

export namespace mathlib {
/**
 * @return The nth fibonacci number
 * @note Boost and GMP have their own nth fib functions as well
 */
constexpr ull fib_n(const int n) {
  if (n <= 2) {
    return n == 0 ? 0 : 1;
  }

  int counter = 1;
  ull a{0};
  ull b{1};
  ull c{};

  while (counter < n) {
    c = a + b;
    if (c < b) {
      throw std::overflow_error("overflow fib_n()");
    }
    a = b;
    b = c;
    ++counter;
  }
  return c;
}
} // namespace mathlib
