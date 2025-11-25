#include <iostream>
#include <vector>
using namespace std;

int findUnique(vector<int> arr)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{

    // PAIR
    vector<int> arr{10, 20, 30, 40, 50, 60, 70};
    int sum = 80;

    // printing all pairs
    // outer loop will point to first element
    for (int i = 0; i < arr.size(); i++)
    {
        // cout<<"We are at element:"<<arr[i]<<endl;
        int element = arr[i];

        // for every element of outer loop inner loop will run
        for (int j = i + 1; j < arr.size(); j++)
        {
            // cout<<"Pair "<<element<< "With" <<arr[j]<<endl;
            // cout << "(" << element << ", " <<  arr[j] << ")" << endl;
            if (element + arr[j] == sum)
            {
                cout << "Pair Found:" << element << " " << arr[j] << endl;
            }
        }
    }

    return 0;
}