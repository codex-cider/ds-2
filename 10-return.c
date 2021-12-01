#include <stdio.h>

int function()
{
    int a = 20;

    if (a > 10)
    {
        if (a == 20)
        {
            return 20;
        }
    }

    return 100;
}

void main()
{
    int a = function();
    printf("Return Value is %d", a);
}