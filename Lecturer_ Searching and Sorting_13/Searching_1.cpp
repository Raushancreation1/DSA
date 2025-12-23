#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int target){

    int start =0;
    int end = size -1;

    int mid = start +(end - start)/2;

    while (start <= end )
    {
       int element = arr[mid];

       if (element == target)
       {
        return mid;
       }
       else if (target < element)
       {
        //search in left part
        end = mid -1;
       }
       else
       {
        //search in right part
        start = mid +1;
       }
       mid = (end + start)/2;
    }
    return -1;
    
}

int main() {

    int arr[]= {2, 4, 6, 8, 10, 12, 16};
    int size= 7;
    int target = 16;

    int indexOftarget = binarySearch(arr,size, target);

    if (indexOftarget == -1)
    {
        cout << "Element not found" << endl;
    }
    else
    {
        cout << "Element found at index: " << indexOftarget<< " Index " << endl;
    }
    return 0;
    
}