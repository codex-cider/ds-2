#include <iostream>
#include <string.h>
using namespace std;

template <class T>
class TempClass
{

    T value;

public:
    TempClass(T item)
    {
        value = item;
    }

    T getValue()
    {
        return value;
    }
};

int main()
{
    class TempClass<string> *String = new TempClass<string>("Generics vs Templates");

    cout << "Output Values: " << String->getValue() << "\n";

    class TempClass<int> *integer = new TempClass<int>(9);
    cout << "Output Values: " << integer->getValue();
}