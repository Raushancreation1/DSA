#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    for (int i=0; i<n; i=i+1)
    {
        for (int j=0; j<n; j=j+1)
        {
            if (i == 0 || j == 0 || j == n-i-1)
            {
                cout << "* ";
            }else{
                cout << "  ";
            }
        }
        cout << endl;
        
    }
    
}