class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        // code here
        int n=mat.size();
        for(int i=0;i<n;i++){
            int s=0,e=n-1;
            while(s<e){
                swap(mat[i][s],mat[i][e]);
                s++,e--;
            }
        }
          for(int j=0;j<n;j++){
            int st=0,en=n-1;
            while(st<en){
                swap(mat[st][j],mat[en][j]);
                st++,en--;
            }
        }
    }
};