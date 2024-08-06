module;

#include <fstream>
#include <gmpxx.h>
#include <random>

module number_theory.primes;

using ui = unsigned long int;

namespace mathlib {
// see https://en.wikipedia.org/wiki/Fermat_primality_test
bool primality_test_fermat(ui const n, ui const k) {
  if (n <= 3) {
    throw std::invalid_argument(
        "Fermat's primality test: n must be greater than 3");
  }

  mpz_t a;
  mpz_t m;
  mpz_t result;
  mpz_t mod;

  std::random_device rd;
  std::mt19937 mt(rd());
  std::uniform_int_distribution<ui> dist(2, n - 2);

  mpz_init(a);
  mpz_init_set_ui(m, n - 1);
  mpz_init(result);
  mpz_init_set_ui(mod, n);

  for (ui i = 0; i < k; ++i) { // NOLINT
    mpz_set_ui(a, dist(mt));
    mpz_powm(result, a, m, mod);
    if (mpz_cmp_ui(result, 1) != 0) {
      mpz_clear(a);
      mpz_clear(m);
      mpz_clear(result);
      mpz_clear(mod);
      return false;
    }
  }

  mpz_clear(a);
  mpz_clear(m);
  mpz_clear(result);
  mpz_clear(mod);

  return true;
}
} // namespace mathlib
