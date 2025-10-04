#include <iostream>
using namespace std;

void printName()
{

    int n;
    cout << " Enter the value of n" << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Rauhan" << endl;
    }
}

void  printNumber( int num) {
    cout << num << endl;

}
int add(int a, int b) {
    int result = a + b;
    return result;
}

int main()
{

    // function call
    // printName();

    int a ;
    cout << "Enter the value of a: " << endl;
    cin >> a;

    int b;
    cout << "Enter the value of b:" << endl;
    cin >> b;

    int sum = add(a, b);

    cout << "Addition is: "<< sum << endl;
    //printNumber(a);
}