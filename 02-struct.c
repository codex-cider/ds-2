#include <stdio.h>

struct Student
{
    int rollNumber;
    double mobile;
};

void main()
{
    int a;
    a = 20;

    int b[20];

    struct Student s1;
    s1.mobile = 123469;
    s1.rollNumber = 1020;

    printf("%X\n", &s1);
    printf("%X\n", &s1.rollNumber);
    printf("%X\n", &s1.mobile);
}
