class Solution {
  public:
    bool findPair(vector<int> &arr, int x) {
        unordered_set<int> s;

        for(int num : arr) {
            // check if num + x or num - x exists
            if(s.count(num + x) || s.count(num - x))
                return true;
            s.insert(num);
        }
        return false;
    }
};