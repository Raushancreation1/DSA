#include<iostream>
using namespace std;

int main () {

    // //outer loop for rows
    // for (int row = 0; row<3; row=row+1)
    // {
    //     //inner loop for columns
    //     for (int col = 0; col<5; col=col+1){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }


    // //outer loop for columns
    // for (int col = 0; col<3; col=col+1)
    // {
    //     //inner loop for rows
    //     for (int row = 0; row<5; row=row+1){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    int n;

    cout << "Enter the star size:";
    cin >> n;
        //outer loop for rows
    for (int row = 0; row<n; row+=1)
    {
        //inner loop for columns
        for (int col = 0; col<n; col+=1){
            cout << "* ";
        }
        cout << endl;
    }
    
    
}