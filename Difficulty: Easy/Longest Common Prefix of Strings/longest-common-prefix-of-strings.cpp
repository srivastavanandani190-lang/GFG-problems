class Solution {
public:
    string longestCommonPrefix(vector<string> arr) {
        if (arr.empty()) return "";
        
        // Sort the array to bring lexicographically smallest and largest strings to the ends
        sort(arr.begin(), arr.end());
        
        // The longest common prefix of the entire array must be a prefix 
        // of both the first and the last string in the sorted vector.
        string first = arr[0];
        string last = arr.back();
        
        int minLength = min(first.size(), last.size());
        int i = 0;
        
        while (i < minLength && first[i] == last[i]) {
            i++;
        }
        
        return first.substr(0, i);
    }
};