// User function Template for C++

// complete the function
// the function should return the reversed string
string reverseString(string &s) {
    // code here
    char left=0;
    char right=s.size()-1;
    while(left<right){
        swap(s[right],s[left]);
        left++;
        right--;
    }
    return s;
   
}