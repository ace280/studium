#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double kFactorial(int k);
double myEulerForward1(int *n1);
double myEulerForward2(int *n2);
double myEulerBackward(int n);

int main (void) {
    int n1 = 0, n2 = 0;
    double e1, e2, e3, e4;
    e1 = myEulerForward1(&n1);
    e2 = myEulerForward2(&n2);
    e3 = myEulerBackward(n2);
    e4 = exp(1.0);
    printf("Erstes Verfahren. e: %.23lf, n: %i\n", e1, n1);
    printf("Zweites Verfahren. e: %.23lf, n: %i\n", e2, n2);
    printf("Rueckwartsverfahren. e: %.23lf\n", e3);
    printf("Mithilfe von math.h. e: %.23lf\n", e4);
    // math.h nutzt offenbar denselben Algorithmus wie myEulerForward1. Zumindest wird dasselbe Ergebnis berechnet
}

double kFactorial(int k) {
    if (k >= 1) {
        return (k * kFactorial(k - 1));
    } else {
        return 1;
    }
}

double myEulerForward1(int *n1) {
    double e = (1 / kFactorial(*n1));
    if (e == 0) {
        return e; 
    } else {
        *n1 += 1;
        return (e + myEulerForward1(n1));
    }
}

double myEulerForward2(int *n2) {
    double e = 0;
    while (e != (e + (1 / kFactorial(*n2)))) {
        e += (1 / kFactorial(*n2));
        *n2 += 1; 
    }
    return e;
}
/* Erläuterung: Die Variante, in der getestet wird, ob die zuzurechnende Zahl 0 ist, ist exakter, 
 * aber langsamer. Das liegt daran, dass die darstellbaren Gleitkommazahlen weiter auseinanderstehen, 
 * so dass auf- bzw. abgerundet werden muss. Dadurch ist die Variante, die nur nachsieht, ob sich die 
 * Zahl noch ändert ungenauer, weil sie schon nach der Zahl aufhört, bei der zum ersten Mal gerundet 
 * wird, also dieselbe Zahl dargestellt wird. 
 */

double myEulerBackward(int n) {
    double e = (1 / kFactorial(n));
    if (n == 0) {
        return e;
    } else {
        n--;
        return (e + myEulerBackward(n));
    }
}

/* Erläuterung: Diese Variante kommt auf dasselbe Ergebnis wie myEulerForward2. Das war zu erwarten, da
 * dieselbe Anzahl von Summanden verwendet wird.
 */
