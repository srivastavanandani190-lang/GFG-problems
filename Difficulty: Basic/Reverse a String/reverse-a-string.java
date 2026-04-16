// User function Template for Java
import java.util.*;

class Solution {
    public static String reverseString(String s) {
        StringBuilder res = new StringBuilder();

        for(int i = s.length() - 1; i >= 0; i--) {
            res.append(s.charAt(i));
        }

        return res.toString();
    }
}