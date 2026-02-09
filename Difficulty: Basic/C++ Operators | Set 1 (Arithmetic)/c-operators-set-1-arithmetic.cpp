class Solution {
  public:
    vector<int> cppOperators(int A, int B) {
        if(B>A){
        return {A + B, A * B, B - A, B / A};}
        else{
            return {A + B, A * B, A - B, A / B};
        }
    }
};
