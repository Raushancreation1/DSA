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

        // if(marks >= 90)
        //     return 'A';
        // else if(marks >= 80)
        //     return 'B';
        // else if(marks >= 70)
        //     return 'C';
        // else if (marks >= 60)
        //     return 'D';
        // else
        //     return 'F';

        switch (marks/10)
        {
            case 10:
            case 9: return 'A'; break;
            case 8: return 'B'; break;
            case 7: return 'C'; break;
            case 6: return 'D'; break;
            default : return 'F'; 
        }
    }

    int getSum (int n) {
        int sum = 0;
        for (int i=1; i<=n; i++)
        {
            sum = sum  + i;
        }
        return sum;
    }

    int getEvenSum (int n) {
        int sum = 0;
        for (int i=2; i<=n; i =  i + 2)
        {
            sum = sum  + i;
        }
        return sum;
    }


int main()
{


    // int n;
    // cout << "Enter the vlaue of n" << endl;
    // cin >> n;
    // int ans = getSum(n);
    // cout << "The sum of even numbers Upto " << n << "is " << ans << endl;


    int n;
    cout << "Enter the vlaue of n" << endl;
    cin >> n;
    int ans = getEvenSum(n);
    cout << "The sum of even numbers Upto " << ans << endl;

    return 0;
}

int add(int x, int y)
{
    int result = x + y;
    return result;
}