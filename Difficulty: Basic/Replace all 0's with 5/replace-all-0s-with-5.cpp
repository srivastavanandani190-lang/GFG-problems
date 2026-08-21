class Solution {
  public:
    int convertFive(int n) {
        // code here
        if (n == 0) {
            return 5;
        }
        vector<int>ans;
        
        while(n!=0){
            ans.push_back(n%10);
            n/=10;
        }
        for(int i=0;i<ans.size();i++){
            if(ans[i]==0){
                ans[i]=5;
            }
        }
        int res = 0;
        // Reconstruct the number by reading the digits backwards
        for (int i = ans.size() - 1; i >= 0; i--) {
            res = res * 10 + ans[i];
        }

        return res; 
         
    }
};