#ifndef BITSTREAM_H
#define BITSTREAM_H

#include <stdlib.h>

struct Bitstream;
typedef struct Bitstream {
    int laenge;
    int position;
    unsigned char *bitstream;
} _Bitstream;

struct Bitstream create(int laenge);
void destroy(struct Bitstream *bs);
void add(struct Bitstream *bs, unsigned int laenge, unsigned int wert);

#endif /* BITSTREAM_H */
