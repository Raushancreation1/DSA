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
    int end = size-1;

    while (start<=end)
    {
        //step1
        swap(arr[start],arr[end]);
        //step2
        start++;
        // setp3
        end--;
    }

    //printing arrary 
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}