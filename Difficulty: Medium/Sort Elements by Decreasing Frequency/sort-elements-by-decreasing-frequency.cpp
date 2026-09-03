 class Solution {
   public:
     vector<int> sortByFreq(vector<int>& nums) {
         // Create an array large enough to cover the max possible value (10^5)
         vector<int> freq(100005, 0);

         for(int num : nums) {
             freq[num]++;
         }

         sort(nums.begin(), nums.end(), [&](int a, int b) {
             if (freq[a] == freq[b]) {
                 return a < b;
             }
             return freq[a] > freq[b];
         });

         return nums;
     }
 };