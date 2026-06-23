class Solution {
  public:
    string firstNonRepeating(string &s) {
        // code here
        string B = "";

    vector<int> repeated(26, 0);
    queue<char> q;

    for (int i = 0; i < s.size(); i++) {
        repeated[s[i] - 'a']++;
        q.push(s[i]);

        while (!q.empty() && repeated[q.front() - 'a'] > 1) {
            q.pop();
        }

        if (q.empty())
            B += '#';
        else
            B += q.front();
    }

    return B;
    }
};