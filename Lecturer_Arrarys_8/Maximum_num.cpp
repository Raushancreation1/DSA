#include<iostream>
#include<limits.h>
using namespace std;

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
    
}

void inc(int arr[], int size){
    arr[0]= arr[0] + 10;
    printArray(arr,size);
}

bool find (int arr[], int size, int key){

    //linear search
    for (int i = 0; i < size; i++)
    {
        if (arr[i]== key)
        {
            return true;
        } 
    }
    
    return false;
}


int main() {

    int arr[] = {12,4,5,45,23,14,78,45,2,6,4};
    int size = 11;
    //int maxi = INT_MIN;
    int mini = INT_MAX;

    // for (int i = 0; i < size; i++)
    // {
    //     if (arr[i] > maxi)
    //     {
    //         //found a number gretaer then maxi, update maxi 
    //         maxi = arr [i];
    //     }
        
    // }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < mini)
        {
            //found a number gretaer then maxi, update maxi 
            mini = arr [i];
        }
        
    }

    // cout<<"maximum number is "<<maxi << endl;
    cout<<"minimum number is "<<mini << endl;

    return 0;
    


}