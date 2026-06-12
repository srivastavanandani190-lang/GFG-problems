class Solution {
  public:
    int removeConsecutiveSame(vector<string>& arr) {
        // code here
        int n=arr.size();
        stack<string>neig;
         for(int i=0;i<n;i++){
             if(neig.empty()){
                  neig.push(arr[i]);
             }
            
            else if(neig.top()==arr[i]){
                    neig.pop();
            }
            else{
                  neig.push(arr[i]);
            }
         }
         int ans=neig.size();
         
         return ans;
        
    }
};