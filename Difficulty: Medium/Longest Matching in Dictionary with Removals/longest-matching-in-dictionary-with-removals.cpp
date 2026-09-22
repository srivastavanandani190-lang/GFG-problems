class Solution {
  public:
    string findLongestWord(string &s, vector<string> &d) {
        string result = "";

        for (const string& word : d) {
            // OPTIMIZATION: Skip the word entirely if it cannot improve our current result.
            // This drastically reduces the number of times we iterate through the long string 's'.
            if (word.length() < result.length()) continue;
            if (word.length() == result.length() && word >= result) continue;

            int i = 0; // Pointer for word
            int j = 0; // Pointer for s

            // Check if 'word' is a subsequence of 's'
            while (i < word.length() && j < s.length()) {
                if (word[i] == s[j]) {
                    i++;
                }
                j++;
            }

            // If the entire word was found, it is guaranteed to be better 
            // than the current result because of our optimization check above.
            if (i == word.length()) {
                result = word;
            }
        }

        return result;
    }
};