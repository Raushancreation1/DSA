#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// class Solution {
//   public:
//     int firstRepeated(vector<int> &arr) {
//         int n = arr.size();

//         // code here
//         for(int i=0; i<n; i++){
//             bool isRepeated=false;
//             for(int j=i+1; j<n; j++){
//                 if(arr[i]==arr[j]){
//                     isRepeated=true;
//                     return i+1;
//                 }
//             }
//         }
//         return -1;
//     }
// };

class Solution {
  public:
    int firstRepeated(vector<int> &arr) {
        int n = arr.size();   // FIX 1
        
        unordered_map<int, int> hash;
        
        // Count frequency
        for(int i = 0; i < n; i++){
            hash[arr[i]]++;   // FIX 2 & 3
        }
        
        // Find first repeated element
        for(int i = 0; i < n; i++){
            if(hash[arr[i]] > 1){
                return i + 1; // FIX 4 (1-based index)
            }
        }
        return -1;
    }
};
