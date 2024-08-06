#include <iostream>
#include <cmath>
#include <fstream>
#include <gmpxx.h>

void fermats_little_theorem() {

    const int LIMIT = 100000;

    unsigned long int count=1;
    mpz_t p, eq, a, pm1;
    mpz_init_set_ui(p, 2);
    mpz_init(eq);
    mpz_init_set_ui(a, 2);
    mpz_init(pm1);
    std::ofstream outFile;
    outFile.open("primes.txt");

    for (unsigned long int i = 0; i < LIMIT && mpz_cmp_ui(p, LIMIT) <= 0; i++) {
        mpz_sub_ui(pm1, p, 1);
        mpz_powm(eq, a, pm1, p);
        if (mpz_cmp_ui(eq, 1) == 0) {
            std::cout << count << "\t";
            gmp_printf("%Zd\n", p);
            outFile << count << "\t";
            outFile << p << std::endl;
            count++;
        }
        mpz_add_ui(p, p, 1);  // increment p
    }

    outFile.close();
    mpz_clear(p);
    mpz_clear(eq);
    mpz_clear(a);
    mpz_clear(pm1);
}
