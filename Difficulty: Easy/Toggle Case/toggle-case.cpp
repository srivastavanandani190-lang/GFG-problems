class Solution {
private:
    void toggleHelper(string &s, int index) {
     
        if (index == s.length()) {
            return;
        }
      
        if (s[index] >= 'a' && s[index] <= 'z') {
            s[index] ='A'+s[index] -'a';  
    
        } else if (s[index] >= 'A' && s[index] <= 'Z') {
            s[index] =+'a'+ s[index] - 'A'; 
        }
        toggleHelper(s, index + 1);
    }

public:
    string toggleCase(string &s) {
        toggleHelper(s, 0);
        return s;
    }
};