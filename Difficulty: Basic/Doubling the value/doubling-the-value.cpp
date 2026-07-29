class Solution {
  public:
    int solve(int b, vector<int> &arr) {
        int ans=b;
        // code here.
        for(int i=0;i<arr.size();i++){
            if(arr[i]==b){
                ans=b*2;
                b=arr[i]*2;
                
            }
        }
        return ans;
    }
};