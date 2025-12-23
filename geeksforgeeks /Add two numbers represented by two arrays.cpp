#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    string calc_Sum(vector<int>& arr1, vector<int>& arr2) {

        int n = arr1.size();
        int m = arr2.size();

        int i = n - 1;
        int j = m - 1;
        int carry = 0;
        string ans;

        // add both arrays
        while (i >= 0 && j >= 0) {
            int x = arr1[i] + arr2[j] + carry;
            ans.push_back((x % 10) + '0');
            carry = x / 10;
            i--; j--;
        }

        // remaining digits of arr1
        while (i >= 0) {
            int x = arr1[i] + carry;
            ans.push_back((x % 10) + '0');
            carry = x / 10;
            i--;
        }

        // remaining digits of arr2
        while (j >= 0) {
            int x = arr2[j] + carry;
            ans.push_back((x % 10) + '0');
            carry = x / 10;
            j--;
        }

        // leftover carry
        if (carry) {
            ans.push_back(carry + '0');
        }

        // remove leading zeros
        while (ans.size() > 1 && ans.back() == '0') {
            ans.pop_back();
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
