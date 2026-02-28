class Solution {
  public:
    string reverseWords(string &s) {
        vector<string> words;
        string temp = "";

        // Step 1: extract words
        for(char c : s) {
            if(c == '.') {
                if(!temp.empty()) {
                    words.push_back(temp);
                    temp.clear();
                }
            } else {
                temp += c;
            }
        }

        if(!temp.empty())
            words.push_back(temp);

        // Step 2: reverse words
        reverse(words.begin(), words.end());

        // Step 3: join with single dot
        string ans = "";
        for(int i = 0; i < words.size(); i++) {
            ans += words[i];
            if(i != words.size() - 1)
                ans += '.';
        }

        return ans;
    }
};