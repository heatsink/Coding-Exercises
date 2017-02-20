/**
 * This program mines prime numbers of medium scale
 * Author - Sean Wallace
 * Version - 1
 */
#include <stdio.h>
#include <limits.h>
typedef int bool;
enum bool { false, true };
void findPrimesFollowing(FILE *f, unsigned long long prev);
bool indivisible(unsigned long long candidate);

/**
 * This is the main method.
 */
int main() {
    FILE *f = fopen("primes.db", "w");
    findPrimesFollowing(f, 1);
    fclose(f);
     
    return 0;
}

void findPrimesFollowing(FILE *f, unsigned long long prev) {
    for (unsigned long long i = prev; i < ULLONG_MAX; i++) {
        if (indivisible(i)) {
            fprintf(f, "%llu\n", i);
        }

    }
}

bool indivisible(unsigned long long candidate) {
    return true;
}
