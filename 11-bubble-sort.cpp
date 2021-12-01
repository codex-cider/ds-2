#include <iostream>
#include <stdio.h>
using namespace std;

void traverseArray(int *a, int arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
        printf("[%d] ", a[i]);
    }
    cout << "\n\n";
}

int main()
{
    int a[] = {10, 5, 8, 2, 18};
    int arraySize = sizeof(a) / sizeof(int);

    cout << "\n\n";

    // Array Before Sort
    cout << "Array Before Sort " << endl;
    traverseArray(a, arraySize);

    for (int i = 0; i < arraySize - 1; i++)
    {

        for (int j = 0; j < arraySize - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
            traverseArray(a, arraySize);
        }
        cout << "/******************************************/" << endl;
        cout << "Step " << i + 1 << endl;
        traverseArray(a, arraySize);
    }

    // Print Sorted array
    cout << "Array After Sort " << endl;
    traverseArray(a, arraySize);
}