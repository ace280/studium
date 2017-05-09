#include <stdio.h>

int main(void) {

    char txt[] = "abcdefghij";
    char *zeiger = &txt[1];

    printf("%p\n", txt);
    printf("%p\n", &zeiger[4]);
    printf("%c\n", *zeiger);
    printf("%p\n", zeiger + 3);
    printf("%c\n", *(zeiger + 1 - 1));
    printf("%p\n", ++zeiger);
    printf("%c\n", *++zeiger);
    printf("%p\n", zeiger);
    printf("%c\n", --(*zeiger));
    printf("%c\n", *zeiger++);
    printf("%c\n", *(&zeiger[1] - 1));
    printf("%c\n", *(zeiger - 3));
    printf("%c\n", *zeiger);
    printf("%c\n", zeiger[-1]);
    printf("%c\n", (zeiger + 1)[-1]);
    printf("%ld\n", zeiger - txt);

    return 0;
}
