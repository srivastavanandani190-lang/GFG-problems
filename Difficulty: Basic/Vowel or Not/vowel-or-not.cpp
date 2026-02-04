class Solution {
  public:
    string isVowel(char c) {
        c = tolower(c);  // handle uppercase letters

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            return "YES";
        }
        return "NO";
    }
};
