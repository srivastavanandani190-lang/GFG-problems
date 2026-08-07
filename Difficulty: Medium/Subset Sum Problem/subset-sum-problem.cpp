// #include <vector>
// using namespace std;

// class Solution {
// public:
//     void print(const vector<int>& arr, int index, int n, int sum, vector<int>& temp) {
//         if (index == n) {
//             temp.push_back(sum);
//             return;
//         }
//         // Pass 'temp' to both recursive calls
//         print(arr, index + 1, n, sum, temp);
//         print(arr, index + 1, n, sum + arr[index], temp);
//     }

//     bool isSubsetSum(vector<int>& arr, int sum) {
//         int n = arr.size(); // Define 'n'
//         vector<int> temp;
        
//         print(arr, 0, n, 0, temp);
        
//         for (int i = 0; i < temp.size(); i++) { // Call size() with parentheses
//             if (sum == temp[i]) {
//                 return true;
//             }
//         }
//         return false;
//     }
// };
#include <vector>
using namespace std;

class Solution {
public:
    bool isSubsetSum(vector<int>& arr, int target) {
        // dp[j] will be true if a subset with sum 'j' exists
        vector<bool> dp(target + 1, false);
        dp[0] = true; // Base case: target sum of 0 is always possible

        for (int num : arr) {
            // Traverse backwards to use values from the previous state
            for (int j = target; j >= num; j--) {
                if (dp[j - num]) {
                    dp[j] = true;
                }
            }
        }

        return dp[target];
    }
};