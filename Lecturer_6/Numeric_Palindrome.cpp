#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int k = n;
    for (int row = 0; row < n; row++)
    {
        int c = 1;
        for (int col = 0; col < k; col++)
        {
            if (col < n - row - 1)
            {
                cout << " ";
            }
            else{
                cout << c;
                c++;
            }
        }
        k++;
        cout << endl;
        
    }
    
}