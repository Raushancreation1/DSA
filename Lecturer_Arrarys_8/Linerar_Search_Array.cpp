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

    // int arr[10]= {1,2};

    // for (int i = 0; i < 10; i++)
    // {
    //    cout<<arr[i]<<" ";
    // }


    int arr[5]= {1,2,8,6,11};
    int size = 5;

    cout<<" Enter the key to find"<<endl;
    int key;
    cin>>key;
    
    if (find(arr,size, key))
    {
        cout<<"Found "<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
    
}