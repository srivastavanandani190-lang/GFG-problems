 class Solution {
   public:
     string maxZero(vector<string> &arr) {
         int max_zeroes = 0;
         string ans = "-1";

         for (int i = 0; i < arr.size(); i++) {
             int count = 0;

             // Count the number of zeroes in the current string
             for (int j = 0; j < arr[i].size(); j++) {
                 if (arr[i][j] == '0') {
                     count++;
                 }
             }

             // If the current number has at least one zero
             if (count > 0) {
                 // If it has strictly more zeroes than our current max
                 if (count > max_zeroes) {
                     max_zeroes = count;
                     ans = arr[i];
                 } 
                 // Tie-breaker: If it has the SAME amount of zeroes, pick the mathematically larger number
                 else if (count == max_zeroes) {
                     // A longer string represents a larger number
                     if (arr[i].length() > ans.length()) {
                         ans = arr[i];
                     } 
                     // If lengths are equal, lexicographical comparison works for numeric strings
                     else if (arr[i].length() == ans.length() && arr[i] > ans) {
                         ans = arr[i];
                     }
                 }
             }
         }

         return ans;
     }
 };