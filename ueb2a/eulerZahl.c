#include <stdio.h>
#include <stdlib.h>

double kFactorial(int k);

int main (void) {
    
}

double kFactorial(int k) {
    if (k >= 1) {
        return (k * kFactorial(k - 1));
    } else {
        return 1;
    }
}
