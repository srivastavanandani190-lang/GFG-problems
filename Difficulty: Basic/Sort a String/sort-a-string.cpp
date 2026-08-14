class Solution {
  public:
    string sortString(string &s) {
        // code here
    //  sort(s.begin(),s.end());
    //  return s;
    vector<int>alpha(26,0);
    for(int i=0;i<s.size();i++){
        // alpha[s[i]-'a']++;
        int index=s[i]-'a';
        alpha[index]++;
    }
    
    string ans;
    for(int i=0;i<26;i++){
        char ch=i+'a';
    while(alpha[i]){
        ans+=ch;
        alpha[i]--;
    }
        
    }
    return ans;
    }
};