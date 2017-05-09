#include "bitstream.h"
#include <stdlib.h>

int main (void) {
    struct Bitstream bs = create(10);
    
    destroy(&bs);
    return EXIT_SUCCESS;
}
