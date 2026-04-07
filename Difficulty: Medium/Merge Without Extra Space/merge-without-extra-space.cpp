class Solution {
public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        vector<int> res;

        // Step 1: Merge
        for(int i = 0; i < a.size(); i++){
            res.push_back(a[i]);
        }
        for(int i = 0; i < b.size(); i++){
            res.push_back(b[i]);
        }

        // Step 2: Sort
        sort(res.begin(), res.end());

        // Step 3: Fill back
        int n = a.size();

        for(int i = 0; i < n; i++){
            a[i] = res[i];
        }

        for(int i = 0; i < b.size(); i++){
            b[i] = res[n + i];
        }
    }
};