#include <iostream>
using namespace std;

void printRowWiseSum(int arr[][3], int rows, int cols){
    //row wise sum traversal 
    cout<<"Printing row wise sum"<<endl;
    for (int i = 0; i < rows; i++)
    {
        int sum =0;
        for (int j = 0; j < cols; j++)
        {
            sum= sum+ arr[i][j];
        }
        cout<<sum<<endl;
    }
    
}

int main()
{

    int arr[3][3];
    int rows = 3;
    int cols = 3;

    // initialization
    // int brr[3][3] = {
    //     {1, 2, 3},
    //     {4, 5, 6},
    //     {7, 8, 9}};

    // row-wise traversal
    // outer loop for rows
    for (int i = 0; i < rows; i++)
    {
        // for every row, loop for columns
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

     cout << " Printing column wise " << endl;
    // // column-wise traversal
    // // outer loop for columns
    for (int i = 0; i < rows; i++)
    {
        // for every row, loop for column
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout<<endl;
    }

    printRowWiseSum(arr, rows,cols);

    return 0;
}