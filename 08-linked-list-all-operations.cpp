#include <iostream>
using namespace std;

class Node
{

public:
    int a;
    Node *next;

    void insertAtFirst(Node **temp)
    {
        cout << "Temp Value Start " << *temp << endl;
        Node *element = new Node();
        cout << "element Value Start " << element << endl;
        if (*temp == NULL)
        {
            cout << "Enter element value ";
            cin >> element->a;
            *temp = element;
        }
        else
        {
            cout << "Enter element value ";
            cin >> element->a;
            element->next = *temp;
            *temp = element;
        }
        cout << "Temp Value End " << *temp << endl;
    }
    void traverseList(Node *temp)
    {
        while (temp != NULL)
        {
            cout << temp->a << endl;
            temp = temp->next;
        }
    }
};

Node *head;

int main()
{
    // head.next = NULL;
    int option;
    do
    {
        cout << "Choose your option " << endl;
        cout << "1) Insert Element at first" << endl;
        cout << "2) Insert Element at last" << endl;
        cout << "3) Insert Element at position" << endl;
        cout << "4) Delete Element at first" << endl;
        cout << "5) Delete Element at last" << endl;
        cout << "6) Delete Element at position" << endl;
        cout << "7) Search Element" << endl;
        cout << "8) Print All Elements" << endl;

        cin >> option;

        switch (option)
        {
        case 1:
            cout << "Head Value " << head << endl;
            head->insertAtFirst(&head);
            break;
        case 2:
            cout << "Under Working" << endl;
            break;
        case 3:
            cout << "Under Working" << endl;
            break;
        case 4:
            cout << "Under Working" << endl;
            break;
        case 5:
            cout << "Under Working" << endl;
            break;
        case 6:
            cout << "Under Working" << endl;
            break;
        case 7:
            cout << "Under Working" << endl;
            break;
        case 8:
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