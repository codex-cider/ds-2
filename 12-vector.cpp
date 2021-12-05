#include <iostream>
#include <vector>
#include <typeinfo>
using namespace std;

int main()
{
    vector<int> v1 = {10, 20, 30, 40, 50, 60};

    vector<int> v2 = {100, 200, 300, 400, 500};

    // v1.at(0) = 100;

    v1.push_back(30);
    cout << "SIZE " << v1.capacity() << endl;
    v1.push_back(30);
    cout << "SIZE " << v1.capacity() << endl;
    v1.push_back(100);
    cout << "SIZE " << v1.capacity() << endl;
    v1.push_back(30);
    cout << "SIZE " << v1.capacity() << endl;
    v1.push_back(30);
    cout << "SIZE " << v1.capacity() << endl;
    v1.push_back(100);
    cout << "SIZE " << v1.capacity() << endl;
    v1.push_back(30);
    cout << "SIZE " << v1.capacity() << endl;
    v1.push_back(30);
    cout << "SIZE " << v1.capacity() << endl;
    v1.push_back(100);
    cout << "SIZE " << v1.capacity() << endl;
    v1.shrink_to_fit();
    cout << "FIT SIZE " << v1.capacity() << endl;

    cout << "FRONT " << v1.front() << endl;
    cout << "BACK " << v1.back() << endl;
    cout << "AT " << v1.at(0) << endl;

    // v1.swap(v2);
    v1.insert(v1.begin() + 1, 30);

    // cout << "" << v1

    cout << "\n\nV1 \n";
    for (int i = 0; i < v1.size(); i++)
    {

        cout << v1.at(i) << endl;
    }

    cout << "\n\nV2 \n";
    for (int i = 0; i < v2.size(); i++)
    {

        cout << v2.at(i) << endl;
    }
}