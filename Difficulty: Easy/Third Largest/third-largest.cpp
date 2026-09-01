 class Solution {
   public:
     int thirdLargest(vector<int> &nums) {
         // If there are fewer than 3 elements, return -1
         if (nums.size() < 3) {
             return -1;
         }

         // Sort the array in descending order
         sort(nums.rbegin(), nums.rend());

         // Return the 3rd element (which is at index 2)
         return nums[2];
     }
 };