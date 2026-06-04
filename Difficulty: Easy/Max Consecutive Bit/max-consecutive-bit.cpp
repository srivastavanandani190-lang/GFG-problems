class Solution {
public:
    int maxConsecBits(vector<int> &arr) {
        int maxCount = 1;
        int count = 1;

        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] == arr[i - 1]) {
                count++;
            } else {
                count = 1;
            }
            maxCount = max(maxCount, count);
        }

        return maxCount;
    }
};