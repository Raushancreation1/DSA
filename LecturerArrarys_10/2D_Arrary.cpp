#include <iostream>
using namespace std;

int main() {

    int arr[3][3];

    //initialization
    int brr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout<< brr[2][2] << endl; //9

    return 0;
}