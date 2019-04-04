#include <stdio.h>
#include <stdbool.h>

int main() {

    /// A Project to print prime numbers up to 300

    // Declaring our Array to store Prime numbers
    int primes[100];

    // We will start adding items from index 2
    int primeIndex = 2;

    // Hard coding first two prime numbers
    primes[0] = 2;
    primes[1] = 3;

    bool isPrime;

    for (int p = 5; p <= 100; p = p + 2){

        isPrime = true;

        for (int i = 1; isPrime && p / primes[i] >= primes[i]; ++i) {

            if (p % primes[i] == 0){
                isPrime = false;
            }
            if (isPrime == true){

                primes[primeIndex] = p;
                ++primeIndex;

            }
        }
    }

    for (int i = 0; i < primeIndex; i++){
        printf("%d,\t", primes[i]);
    }

    return 0;
}