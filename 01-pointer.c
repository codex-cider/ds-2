#include <stdio.h>

void main()
{
    int a;
    a = 10;

    int *p;
    p = &a;

    printf("ADDRESS OF A IS %X\n", &a);
    printf("VALUE OF A IS %d\n", a);

    printf("\n\n");
    printf("ADDRESS OF P IS %X\n", &p);
    printf("VALUE OF P is %X\n", p);
    printf("VALUE OF POINTER p %d\n", *p);
}