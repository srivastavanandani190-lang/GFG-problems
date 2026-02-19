class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        
        int n = arr.size();
        int count = 1;

        for (int i = 1; i < n; i++) {
            if (arr[i] == arr[i - 1]) {
                count++;
                if (count > n / 2)
                    return arr[i];
            } else {
                count = 1;
            }
        }

        // handle single-element case or majority at start
        if (count > n / 2)
            return arr[n - 1];

        return -1;
    }
};

