#include<iostream>
using namespace std;

bool checkPrime(int n){
    int i = 2;
    for ( i = 2; i <n; i++)
    {
        if (n%i ==0)
        {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin>>n;
    bool isPriime = checkPrime(n);
    if (isPriime)
    {
       cout<<"Prime\n";
    }
    else{
        cout<<"Not a Prime\n";
    }
    

}