#include<iostream>
#include<vector>
using namespace std;

int firstOcc(vector<int> arr, int target){
    int s = 0;
    int e = arr.size() -1;

    int mid = s + (e - s)/2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            e= mid -1;
        }
        else if (target > arr[mid])
        {
            // right part
            s = mid +1;
        }
        else if(target < arr[mid]){
            // left part
            e = mid -1;

        }
        mid = s + (e - s)/2;
        
        
    }

    return ans;
    
}

int main() {

    vector<int> v{1,3,5,6,8,7,2,4,4,4,4,6,7};

    int target = 4;
    int indestOfFirstOcc = firstOcc(v, target);

    cout << "First Occurence of "<< indestOfFirstOcc << endl;

    return 0;
}