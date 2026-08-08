#include <vector>
#include <unordered_set>

class Solution {
  public:
    bool subArrayExists(std::vector<int>& arr) {
        std::unordered_set<int> prefixSums;
        int sum = 0;

        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];

            // Condition 1: Current element is 0 or sum from index 0 is 0
            if (sum == 0) {
                return true;
            }

            // Condition 2: Sum already seen in prefixSums set
            if (prefixSums.find(sum) != prefixSums.end()) {
                return true;
            }

            // Insert current prefix sum into the set
            prefixSums.insert(sum);
        }

        return false;
    }
};