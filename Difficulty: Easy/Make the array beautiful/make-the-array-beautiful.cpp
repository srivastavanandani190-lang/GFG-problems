class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        // code here
        int n=arr.size();
        stack<int>neig;
         for(int i=0;i<n;i++){
             if(neig.empty()){
                  neig.push(arr[i]);
             }
            
            else if(arr[i]>=0){
                if(neig.top()>=0){
                  neig.push(arr[i]);
                }
                else{
                    neig.pop();
                }
            }
            else{
                if(neig.top()<0){
                  neig.push(arr[i]);
                }
                else{
                    neig.pop();
                }
            }
         }
         vector<int>ans(neig.size());
         int j=neig.size()-1;
         while(!neig.empty()){
             ans[j]=neig.top();
             neig.pop();
             j--;
         }
         return ans;
    }
};