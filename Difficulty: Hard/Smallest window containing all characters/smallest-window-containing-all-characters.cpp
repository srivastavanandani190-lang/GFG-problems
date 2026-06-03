class Solution {
  public:
    string minWindow(string &s, string &p) {
        // code here
        int total=p.size();
        int n=s.size();
        unordered_map<char,int>m;
        for(int i=0;i<total;i++){
            m[p[i]]++;
        }
        int count=INT_MAX;
        int st=0;
        int e=0;
        int index=-1;
        while(e<n){
            m[s[e]]--;
            if(m[s[e]]>=0){
                total--;
            }
                while(!total && st<=e){
                    if(count>e-st+1){
                        count=e-st+1;
                        index=st;
                    }
                    m[s[st]]++;
                    if(m[s[st]]>0){
                        total++;
                    }
                    st++;
                }
                e++;
        }
        if(index==-1){
            return "";
        }
        string str="";
        for(int i=index;i<index+count;i++){
            str+=s[i];
        }
        return str;
    }
};