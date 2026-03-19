class Solution {
public:
    int kthElement(vector<int>& a, vector<int>& b, int k) {
        vector<int> v;

        v.insert(v.end(), a.begin(), a.end());
        v.insert(v.end(), b.begin(), b.end());

        sort(v.begin(), v.end());

        return v[k - 1];
    }
};