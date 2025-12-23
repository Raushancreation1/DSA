#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        // ✅ FIX: handle empty matrix
        if (matrix.empty() || matrix[0].empty()) {
            return {};
        }

        vector<int> ans;
        int m = matrix.size();
        int n = matrix[0].size();
        int total = m * n;

        int top = 0, bottom = m - 1;
        int left = 0, right = n - 1;
        int count = 0;

        while (count < total) {

            // top row
            for (int i = left; i <= right && count < total; i++) {
                ans.push_back(matrix[top][i]);
                count++;
            }
            top++;

            // right column
            for (int i = top; i <= bottom && count < total; i++) {
                ans.push_back(matrix[i][right]);
                count++;
            }
            right--;

            // bottom row
            for (int i = right; i >= left && count < total; i--) {
                ans.push_back(matrix[bottom][i]);
                count++;
            }
            bottom--;

            // left column
            for (int i = bottom; i >= top && count < total; i--) {
                ans.push_back(matrix[i][left]);
                count++;
            }
            left++;
        }

        return ans;
    }
};
