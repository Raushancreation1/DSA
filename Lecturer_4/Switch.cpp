#include <iostream>
using namespace std;

int main()
{

    int val;
    cout << "Enter the value " << endl;

    cin >> val;

    switch (val)
    {
    case 1:
        cout << "Raushan";
        break;
    case 2:
        cout << "Creation";
        break;
    case 3:
        cout << "Ranjeet";
        break;
    case 4:
        cout << "Nitesh";
        break;
    case 5:
        cout << "Vishal";
        break;

    default:
        cout << "Raja";
    }
}