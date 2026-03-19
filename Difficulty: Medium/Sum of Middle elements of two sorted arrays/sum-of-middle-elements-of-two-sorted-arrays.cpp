class Solution {
public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
        vector<int> v;

        // merge both arrays
        v.insert(v.end(), arr1.begin(), arr1.end());
        v.insert(v.end(), arr2.begin(), arr2.end());

        // sort the merged array
        sort(v.begin(), v.end());

        int n = arr1.size(); // both arrays same size

        // middle elements
        return v[n - 1] + v[n];
    }
};