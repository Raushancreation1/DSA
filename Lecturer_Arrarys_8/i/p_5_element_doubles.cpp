#include<iostream>
using namespace std;

int main() {
    // int arr[500];
    // int n;

    // cout<<" How many numbers you want to add in arrary"<<endl;

    // cin>>n;

    // cout<<"Enter 5 Number:\n";
    // for (int i = 0; i <n; i++)
    // {
    //     cin>>arr[i];
    // }

    // cout<<" Doubles of the number arr:";
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<2*arr[i]<<" ";
    // }


    int arr[5] = {1,2,3,4,6};

    for (int i = 0; i < 5; i++)
    {
        arr[i] = 1;
    }

    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i] <<" ";
    }
    
    
    return 0;
    
    
}