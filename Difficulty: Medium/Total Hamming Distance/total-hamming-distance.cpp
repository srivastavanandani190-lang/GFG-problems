 class Solution {
 public:
     int totHammingDist(vector<int>& arr) {
         int totalSum = 0;
         int n = arr.size();

         // Iterate through all 32 bits of an integer
         for (int i = 0; i < 32; i++) {
             int countOnes = 0;
             int countZeroes = 0;

             // For each bit position, count how many numbers have a 1 and how many have a 0
             for (int num : arr) {
                 if ((num >> i) & 1) {
                     countOnes++;
                 } else {
                     countZeroes++;
                 }
             }
             // The number of pairs that differ at the i-th bit is (countOnes * countZeroes)
             totalSum += (countOnes * countZeroes);
         }

         return totalSum;
     }
 };