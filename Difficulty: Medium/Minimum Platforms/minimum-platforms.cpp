class Solution {
  public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        int n = arr.size();

        // Sort arrival and departure times
        sort(arr.begin(), arr.end());
        sort(dep.begin(), dep.end());

        int i = 0, j = 0;
        int platforms = 0, maxPlatforms = 0;

        // Traverse both arrays
        while (i < n && j < n) {

            // New train arrives before previous departs
            if (arr[i] <= dep[j]) {
                platforms++;
                maxPlatforms = max(maxPlatforms, platforms);
                i++;
            }
            else {
                // Train departs
                platforms--;
                j++;
            }
        }

        return maxPlatforms;
    }
};