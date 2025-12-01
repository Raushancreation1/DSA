
#include <iostream>
#include<limits.h>
using namespace std;

bool findkey(int arr[][3], int rows, int cols, int key)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == key)
                return true;
        }
    }
    return false;
}

void printRowWiseSum(int arr[][3], int rows, int cols)
{
    // row wise sum traversal
    cout << "Printing row wise sum" << endl;
    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < cols; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << sum << endl;
    }
}

int getMax(int arr[][3], int rows, int cols)
{
    int maxi = INT_MIN;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] > maxi)
            {
                maxi = arr[i][j];
            }
        }
    }
    return maxi;
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
        cout << endl;
    }

    cout<<getMax(arr,rows,cols)<<endl;


    return 0;
}