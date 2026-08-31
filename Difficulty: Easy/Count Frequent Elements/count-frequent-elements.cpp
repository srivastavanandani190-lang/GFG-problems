 class Solution {
   public:
     int countOccurence(vector<int>& arr, int k) {
         unordered_map<int, int> freq;
         int n = arr.size();
         int count = n / k;

     
         for(int i = 0; i < n; i++){
             freq[arr[i]]++;
         }

         int num = 0;
       
         for(auto it : freq){
             if(it.second > count){
                 num++;
             }
         }

         return num;
     }
 };