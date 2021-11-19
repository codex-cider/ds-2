#include <iostream>
#include <cstddef>

using namespace std;

class Node
{
public:
    int a;
    Node *next;

    void insertAtFirst(Node *currentStartingElement)
    {
        cout << "currentStartingElement Address " << &currentStartingElement << endl;
        Node *element = new Node();
        cout << "Enter element value ";
        cin >> element->a;
        element->next = currentStartingElement;
        currentStartingElement = element;
    }

    void traverseList(Node *currentStartingElement)
    {
        Node *head = currentStartingElement;
        while (head != NULL)
        {
            cout << head->a << endl;
            head = head->next;
        }
    }
};

Node *head = NULL;

int main()
{
    int option = 1;

    do
    {
        cout << "Choose your option " << endl;
        cout << "1) Insert Element at first" << endl;
        cout << "2) Print All Elements" << endl;
        cin >> option;

        switch (option)
        {
        case 1:
            cout << "Head Address " << &head << endl;
            head->insertAtFirst(head);
            break;
        case 2:
            head->traverseList(head);
            break;
        default:
            cout << "Wrong Option" << endl;
            break;
        }

        cout << "Wants to continue press 1 else any number ";
        cin >> option;

    } while (option == 1);

    return 0;
}
