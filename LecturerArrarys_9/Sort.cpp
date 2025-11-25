#include <iostream>
#include <vector>
using namespace std;

int findUnique(vector<int> arr)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

void printArray(vector<int> &arr)
{
    for (auto i: arr)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr{1, 0, 1, 0, 1, 0, 1, 0, 1, 0};

    int start = 0;
    int end = arr.size() - 1;
    int i = 0;

    while (i < arr.size())
    {
        cout << "for i: " << i << " start: " << start << " end: " << end << endl;
        if (arr[i] == 0)
        {
            cout << "found Zero " << endl;
            cout << "before swap: ";
            printArray(arr);

            // swap from left
            swap(arr[start], arr[i]);
            cout << "after swap: ";
            printArray(arr);
            start++;
            i++;
            cout << "for i: " << i << " start: " << start << " end: " << end << endl;
        }
        else
        {
            cout << "found one " << endl;
            cout << "before swap: ";
            printArray(arr);
            // swap from right
            swap(arr[end], arr[i]);
            cout << "after swap: ";
            printArray(arr);
            end--;
        }
    }

    // printing
    for (auto value : arr)
    {
        cout << value << " ";
    }

    return 0;
}