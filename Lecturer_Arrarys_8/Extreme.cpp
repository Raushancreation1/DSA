#include <iostream>
#include <limits.h>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void inc(int arr[], int size)
{
    arr[0] = arr[0] + 10;
    printArray(arr, size);
}

bool find(int arr[], int size, int key)
{

    // linear search
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }

    return false;
}

int main()
{

    int arr[8] = {10, 20, 30, 40, 50, 60, 70, 80};
    int size = 8;

    int start = 0;
    int end = size - 1;

    while (true)
    {
        if (start > end)
            break;

        if (start == end)
        {
            cout << arr [start] << " ";
        }

        else{
            cout<<arr[start]<< " ";
            cout<<arr[end]<< " ";
        }
        start++;
        end--;
    }

    return 0;
}