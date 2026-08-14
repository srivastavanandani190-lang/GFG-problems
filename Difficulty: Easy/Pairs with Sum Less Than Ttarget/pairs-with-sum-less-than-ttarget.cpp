#include <vector>
#include <algorithm>

using namespace std;

class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // 1. Sort the array first for the two-pointer approach to work
        sort(arr.begin(), arr.end());
        
        int count = 0;
        int s = 0, e = arr.size() - 1;
        
        // 2. The loop condition should be strictly s < e so pointers don't cross
        while(s < e) {
            if(arr[s] + arr[e] < target) {
                // 3. Since the array is sorted, if arr[s] + arr[e] < target,
                // then arr[s] paired with any element before 'e' will also be < target.
                count += (e - s); 
                
                // Move the start pointer to check the next element
                s++;
            } else {
                // 4. If the sum is >= target, we need a smaller sum, so decrement 'e'
                e--;
            }
        }
        
        return count;
    }
};