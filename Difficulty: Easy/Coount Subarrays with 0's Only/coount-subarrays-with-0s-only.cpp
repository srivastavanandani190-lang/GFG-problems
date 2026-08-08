class Solution {
public:
    long long int noOfSubarrays(vector<int>& arr) {
        long long int total_count = 0;
        long long int current_count = 0;
        
        for (int num : arr) {
            if (num == 0) {
                current_count++;
                total_count += current_count;
            } else {
                current_count = 0;
            }
        }
        
        return total_count;
    }
};