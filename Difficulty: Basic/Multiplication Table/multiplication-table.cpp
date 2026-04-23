class Solution {
  public:
    vector<int> getTable(int n) {
        vector<int> get(10);  // size = 10
        for(int i = 1; i <= 10; i++){
            get[i - 1] = n * i;
        }
        return get;
    }
};