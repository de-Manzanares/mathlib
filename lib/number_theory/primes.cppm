export module number_theory.primes;

using ui = unsigned long int;

export namespace mathlib {
/**
 * @param n The number to check test for primality.
 * @param k The number of times to test it.
 * @return True  - n is likely to be prime \n
 *         False - n is composite
 */
bool primality_test_fermat(ui n, ui k);
} // namespace mathlib
