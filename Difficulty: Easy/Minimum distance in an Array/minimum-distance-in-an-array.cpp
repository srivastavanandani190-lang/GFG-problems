 class Solution {
   public:
     int minDist(vector<int>& arr, int x, int y) {
         int i1 = -1, i2 = -1;
         int min_dist = INT_MAX;  

         for(int i = 0; i < arr.size(); i++){
             if(arr[i] == x){
                 i1 = i;
             }
             if(arr[i] == y){
                 i2 = i;
             }

             
             if(i1 != -1 && i2 != -1){
                  min_dist = min(min_dist, abs(i1 - i2));
             }
         }
 
         if(i1 == -1 || i2 == -1){
              return -1;
         }

         return min_dist;
     }
 };