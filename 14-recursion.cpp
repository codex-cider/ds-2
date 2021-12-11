#include <iostream>
using namespace std;

void testR(int i)
{
    printf("Test R -- Start %d\n", i);
    if (i < 5)
    {
        i++;
        testR(i);
    }
    printf("Test R -- End %d\n", i);
}

int main()
{
    int a = 0;
    testR(a);
}