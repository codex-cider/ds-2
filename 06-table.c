#include <stdio.h>

void main()
{
    int table;
    printf("Enter table number ");
    scanf("%d", &table);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", table, i, i * table);
    }
}