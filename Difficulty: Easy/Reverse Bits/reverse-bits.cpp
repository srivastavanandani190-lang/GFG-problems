class Solution {
public:
    int reverseBits(int n) {
        bitset<32> b(n);
        string s = b.to_string();

        // Remove leading zeros
        s = s.substr(s.find('1'));

        reverse(s.begin(), s.end());

        bitset<32> ans(s);
        return ans.to_ulong();
    }
};