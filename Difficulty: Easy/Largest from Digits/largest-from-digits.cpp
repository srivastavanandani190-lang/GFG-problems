class Solution {
public:
    string maxNumber(vector<int>& arr) {

        vector<string> v;
        v.reserve(arr.size());

        for (int x : arr)
            v.push_back(to_string(x));

        sort(v.begin(), v.end(),
            [](const string& a, const string& b) {
                return a + b > b + a;
            });

        if (v[0] == "0")
            return "0";

        string ans;
        for (const string& s : v)
            ans += s;

        return ans;
    }
};