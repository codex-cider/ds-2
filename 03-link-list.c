#include <stdio.h>

struct node
{
    int a;
    struct node *p;
};

void main()
{

    struct node n1;
    struct node n2;
    struct node n3;

    n1.a = 30;
    n1.p = &n2;

    n2.a = 50;
    n2.p = &n3;

    n3.a = 66;
    n3.p = NULL;

    struct node start = n1;
    while (start.p != NULL)
    {
        printf("A is %d\n", start.a);
        start = *start.p;
    }
}