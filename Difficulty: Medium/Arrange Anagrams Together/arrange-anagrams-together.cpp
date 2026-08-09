#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    vector<vector<string>> anagrams(vector<string>& arr) {
        unordered_map<string, vector<string>> mp;
        vector<string> order; // To maintain the relative group order
        
        for (const string& s : arr) {
            string key = s;
            sort(key.begin(), key.end());
            
            if (mp.find(key) == mp.end()) {
                order.push_back(key);
            }
            mp[key].push_back(s);
        }
        
        vector<vector<string>> result;
        for (const string& key : order) {
            result.push_back(mp[key]);
        }
        
        return result;
    }
};