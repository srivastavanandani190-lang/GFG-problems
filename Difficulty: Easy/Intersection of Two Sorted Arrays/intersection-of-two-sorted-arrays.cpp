 class Solution {
 public:
     vector<int> intersection(vector<int>& arr1, vector<int>& arr2) {
         unordered_map<int, int> mp;
         vector<int> ans;

         // Store unique elements of arr1 in the map
         for (int num : arr1) {
             mp[num] = 1;
         }

         // Traverse arr2 to find common elements
         for (int num : arr2) {
             // If the element is present in the map and hasn't been added yet
             if (mp[num] == 1) {
                 ans.push_back(num);
                 mp[num] = 0; // Mark as 0 to avoid adding duplicates
             }
         }

         return ans;
     }
 };