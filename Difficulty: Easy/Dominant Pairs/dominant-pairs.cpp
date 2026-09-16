class Solution {
public:
    int dominantPairs(vector<int>& arr) {
        int n = arr.size();
        int half = n / 2;

        // Sort the first half and the second half independently
        sort(arr.begin(), arr.begin() + half);
        sort(arr.begin() + half, arr.end());

        int count = 0;
        int i = 0;          // Pointer for the first half
        int j = half;       // Pointer for the second half

        // Traverse both halves
        while (i < half && j < n) {
            if (arr[i] >= 5 * arr[j]) {
                // If arr[i] is valid, all subsequent elements in the sorted first half are also valid
                count += (half - i);
                j++; // Move to the next element in the second half
            } else {
                // Otherwise, move to a larger element in the first half
                i++;
            }
        }

        return count;
    }
};