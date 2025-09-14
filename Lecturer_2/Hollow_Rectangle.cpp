#include<iostream>

using namespace std;

int main () {

    // for (int row=0; row<3; row=row+1) {
    //     //first row or lasrt row --> print all stars

    //     if (row==0 || row==2) 
    //     {
    //         for (int col=0; col<5; col++)
    //         {
    //             cout << "* ";
    //         }
    //     }
    //     else{
    //         //Remainiging middle rows
    //         //first star
    //         cout << "* ";

    //         //spaces
    //         for (int i=0; i<3; i=i+1)
    //         {
    //             cout << "  ";
    //         }
    //         //last star
    //         cout << "* "; 
    //     }
        
    //     cout << endl;
    // }

  
    int rowCount, colCount;
    cin >> rowCount;
    cin >> colCount;

    for (int row=0; row<rowCount; row=row+1) {
        //first row or lasrt row --> print all stars

        if (row==0 || row== rowCount-1) 
        {
            for (int col=0; col<colCount; col++)
            {
                cout << "* ";
            }
        }
        else{
            //Remainiging middle rows
            //first star
            cout << "* ";

            //spaces
            for (int i=0; i<colCount-2; i=i+1)
            {
                cout << "  ";
            }
            //last star
            cout << "* "; 
        }
        
        cout << endl;
    }

}