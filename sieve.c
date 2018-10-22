#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int sieve(int targetPrime) {
    double pnt = targetPrime * log( targetPrime) * 1.15; // n
    int pns = (int) pnt;
    char * numbers = malloc( pns);
    //char numbers[(int) pns];
    int primeIndex = 0; //which prime number we have encountered
    int currentIndex = 2; //number we are checking
    
    while (currentIndex != pns) {
        numbers[currentIndex] = 0; //not checked yet
        currentIndex++;
    }
    
    currentIndex = 2;
    int i = 0;
    
    while (primeIndex < targetPrime) {
        if (numbers[currentIndex] == 0) { //is a prime
            i = 2;
            while (i*currentIndex <= pns) {
                numbers[i * currentIndex] = -5; //composite
                //printf("%d, %d\n", i*currentIndex, primeIndex);
                i++;
            }
            primeIndex++;
        }
        currentIndex++;
    }
    return --currentIndex;
}
