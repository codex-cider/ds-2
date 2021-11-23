#include <stdio.h>

#include <stdio.h>

void main()
{
    int size;
    int randome;

    printf("How many input you want ");
    scanf("%d", &size);

    printf("Enter any input number ");
    scanf("%d", &randome);

    int a[size];
    int i;

    for (i = 0; i < size; i++)
    {
        printf("Enter the value of a[%d]: ", i);
        scanf("%d", &a[i]);
        if (randome % 2 == 0)
        {
            i = i + 2;
        }
    }

    printf("\n\n\n");

    for (i = 0; i < size; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
}