#include<iostream>
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

    int arr[] = {0,1,0,1,1,0,0,0,0,1,1,0,1,0,1};

    int size = 15;
    int numZero= 0;

    int numOne= 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i]==0)
        {
           numZero++;
        }
        if (arr[i] ==1)
        {
            numOne++;
        }  
    }

    cout<<"Number of Zeroes "<<numZero<<endl;
    cout<<"Number of ones "<<numOne<<endl;
    
    return 0;
}