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

void printNumber(int num)
{
    cout << num << endl;
}
int add(int x, int y);

int findMax(int num1, int num2, int num3)
{
    if (num1 > num2 && num1 > num3)
    {
        return num1;
    }
    else if (num2 > num1 && num2 > num3)
    {
        return num2;
    }
    else
    {
        return num3;
    }
}

void printCounting(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}

char getGrade(int marks) {

        if(marks >= 90)
            return 'A';
        else if(marks >= 80)
            return 'B';
        else if(marks >= 70)
            return 'C';
        else if (marks >= 60)
            return 'D';
        else
            return 'F';
    }


int main()
{

    // function call
    // printName();

    // int a ;
    // cout << "Enter the value of a: " << endl
    // cin >> a;

    // int b;
    // cout << "Enter the value of b:" << endl;9
    // cin >> b;

    // int sum = add(a, b);

    // cout << "Addition is: "<< sum << endl;
    // printNumber(a);

    // int a,b,c;
    // cin >> a >> b >> c;

    // int maximumNumber = findMax(a,b,c);
    // cout << maximumNumber << endl;

    // int n;
    // cout << "Enater the value of n:" << endl;
    // cin >> n;

    // printCounting(n);

    int marks;
    cout << "Enter the marks:" << endl;
    cin >> marks;

    char finalGrade = getGrade(marks);
    cout << finalGrade << endl;

    return 0;
}

int add(int x, int y)
{
    int result = x + y;
    return result;
}