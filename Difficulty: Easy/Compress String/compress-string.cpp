 class Solution {
   public:
     string compressString(string &chars) {
         int n = chars.size();
         if (n == 0) return ""; // Handle empty string edge case

         int i = 1;
         int count = 1;
         string ans = "";

         while (i < n) {
             // Compare lowercase versions of the characters
             if (tolower(chars[i]) == tolower(chars[i-1])) {
                 count++;
             } else {
                 // Append the lowercase previous character and its count
                 ans += tolower(chars[i-1]);
                 ans += to_string(count);
                 count = 1; 
             }
             i++;  
         }

         // Append the very last character (in lowercase) and its count
         ans += tolower(chars[n-1]);
         ans += to_string(count);

         return ans;
     }
 };