// User function Template for C++
char extraChar(string &s1, string &s2) {

    vector<int> fre1(256, 0), fre2(256, 0);

    // Count frequency of s1
    for (char c : s1) {
        fre1[c]++;
    }

    // Count frequency of s2
    for (char c : s2) {
        fre2[c]++;
    }

    // Find extra character
    for (int i = 0; i < 256; i++) {
        if (fre2[i] > fre1[i]) {
            return (char)i;
        }
    }

    return '\0'; // safety
}
