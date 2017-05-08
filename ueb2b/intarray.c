#include "intarray.h"

struct IntArray create(int laenge) {
    struct IntArray ia = {laenge, calloc(laenge, sizeof(int))};
    return ia;
}

void destroy(struct IntArray ia) {
    free(ia.intArray);
}

//Bricht bei fehlerhaftem Zugriff ab
int read(struct IntArray ia, int index) {
    if (index < ia.laenge && index >= 0) {
        return ia.intArray[index];
    }
    exit(EXIT_FAILURE);
}


//Ignoriert fehlerhaften Zugriff
void set(struct IntArray *ia, int index, int value) {
    if (index < ia->laenge && index >= 0) {
        ia->intArray[index] = value;
    }
}
