#include <iostream>
using namespace std;

/* function to print the array elements */
void printArr(int a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }
}

/* function to heapify a subtree. Here 'i' is the   
index of root node in array a[], and 'n' is the size of heap. */
void heapify(int a[], int n, int i)
{
    printf("\n\n");
    int largest = i;       // Initialize largest as root
    int left = 2 * i + 1;  // left child
    int right = 2 * i + 2; // right child
    // If left child is larger than root

    printf("largest = %d, left = %d, right = %d, size = %d, i = %d", largest, left, right, n, i);
    printf("\n\n");
    printf("left < n && a[left] > a[largest]\n");
    printf("%d < %d && %d > %d ", left, n, a[left], a[largest]);
    if (left < n && a[left] > a[largest])
    {
        largest = left;
        printf("\nlargest = left");
        printf("\nlargest = %d", largest);
    }
    printf("\n\n");
    printf("right < n && a[right] > a[largest]\n");
    printf("%d < %d && %d > %d ", right, n, a[right], a[largest]);
    // If right child is larger than root
    if (right < n && a[right] > a[largest])
    {
        largest = right;
        printf("\nlargest = right");
        printf("\nlargest = %d", largest);
    }

    printf("\n\n");
    printf("largest != i\n");
    printf("%d != %d", largest, i);
    // If root is not largest
    printf("\n");
    if (largest != i)
    {
        // swap a[i] with a[largest]
        int temp = a[i];
        a[i] = a[largest];
        a[largest] = temp;
        printf("\nArray is -- ");
        printArr(a, 7);
        printf("\n------------------------\n");
        heapify(a, n, largest);
    }
    else
    {
        printf("\nArray is -- ");
        printArr(a, 7);
        printf("\n------------------------\n");
    }
}
/*Function to implement the heap sort*/
void heapSort(int a[], int n)
{

    printf("\n");
    printf("\n");
    printf("\n**** START HEAP SORT FIRST LOOP \n");
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(a, n, i);
    }
    printf("\n**** END HEAP SORT FIRST LOOP \n");

    printf("\n********  AFTER FIRST LOOP *************\n");
    printf("          ");
    printArr(a, 7);
    printf("\n*****************************************\n");

    printf("\n**** START HEAP SORT SECOND LOOP \n");
    // One by one extract an element from heap
    for (int i = n - 1; i >= 0; i--)
    {
        /* Move current root element to end*/
        // swap a[0] with a[i]
        int temp = a[0];
        a[0] = a[i];
        a[i] = temp;

        heapify(a, i, 0);
    }
    printf("\n**** END HEAP SORT SECOND LOOP \n");
}

int main()
{
    int a[] = {5, 12, 2, 8, 10, 6, 7};
    int n = sizeof(a) / sizeof(a[0]);
    printf("\n\n");
    cout << "Before sorting array elements are - \n";
    printArr(a, n);
    heapSort(a, n);
    cout << "\nAfter sorting array elements are - \n";
    printArr(a, n);
    return 0;
}