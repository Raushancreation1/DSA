#include<iostream>
using namespace std;

int findSqrt(int n) {
    int target = n;
    int s = 0;
    int e = n;
    int ans = -1;

    int mid = s + (e - s)/2;

    while (s <= e)
    {
        if (mid * mid == target)
        return mid;

        if (mid * mid > target)
        {
            // left part
            e = mid -1;
        }
        else{
            // ans store
            ans = mid;

            // rigth part
            s = mid +1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
    
}


int main() {

    int n;
    cout << "Enter the Number:" <<endl;
    cin >> n;

    int ans = findSqrt(n);

    cout << "Ans is:" <<ans << endl;

    return 0;
}