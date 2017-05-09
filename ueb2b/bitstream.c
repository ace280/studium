#include "bitstream.h"

struct Bitstream create(int laenge) {
    struct Bitstream bs = {laenge, 0, calloc(laenge, sizeof(char))};
    return bs;
}

void destroy(struct Bitstream *bs) {
    free(bs->bitstream);
}

void add(struct Bitstream *bs, unsigned int laenge, unsigned int wert) {
     
}
