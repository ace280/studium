#include <stdio.h>
#include <stdlib.h>

double determinante(double a, double b, double c, double d);

int main (void) {
    double a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
    int check;
    printf("Bitte die 6 Koeffizienten in der Reihenfolge a,b,c,d,e,f und mit je einem Leerzeichen zwischen den Werten.\n");
    check = scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);
    
    if (check == 6) {
        double x, y;
        double detA = determinante(a, b, c, d);
        if (detA != 0) {
            x = (determinante(e, b, f, d) / detA);
            y = (determinante(a, e, c, f) / detA);
            printf("x ist %lf und y ist %lf\n", x, y);
            exit(EXIT_SUCCESS);
        } else {
            printf("Die angegebene Matrix ist nicht invertierbar\n");
            exit(EXIT_FAILURE); 
        }
    } else {
        printf("Die angegebenen Werte enthalten ungültige Zeichen.\n");
        exit(EXIT_FAILURE);
    }
}

// Nach folgendem Muster:       |a b|
//                              |c d|
double determinante (double a, double b, double c, double d) {
    return ((a * d ) - (b * c));
}

/* Anmerkung: Während mit d = 1.02 ein exaktes Ergebnis berechnet werden kann, ist bei 1.03 die Abweichung vom tatsächlichen Ergebnis sehr hoch. */
