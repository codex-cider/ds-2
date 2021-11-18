#include <stdio.h>
#include <stdlib.h>

struct node
{
    int a;
    struct node *p;
};
int main()
{
    struct node *head = NULL;
    struct node *n1 = (struct node *)malloc(sizeof(struct node));
    struct node *n2 = (struct node *)malloc(sizeof(struct node));
    struct node *n3 = (struct node *)malloc(sizeof(struct node));

    n1->a = 30;
    n1->p = n2;
    n2->a = 50;
    n2->p = n3;
    n3->a = 66;

    printf("Address Of Head %X\n", &head);
    n3->p = head;
    printf("Address Of P %X\n", n3->p);
    head = n1;
    printf("Address Of &Head %X\n", &head);
    printf("Address Of &n1 %X\n", &n1);
    printf("Address Of Head %X\n", head);
    printf("Address Of n1 %X\n", n1);

    struct node *start = head;
    while (start->p != NULL)
    {
        printf("%d\n", start->a);
        start = start->p;
    }
    return 0;
}
