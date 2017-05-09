#include "intarray.h"
#include <stdlib.h>
#include <stdio.h>

int main (void) {
    struct IntArray ia = create(30);    
    set(&ia, 3, 900);
    set(&ia, 100, 3);
    printf("Wert an Stelle 3: %d\n", read(ia, 3));
    //printf("Wert an Stelle 900: %d\n", read(ia, 900));
    destroy(ia);
    return EXIT_SUCCESS;
}
