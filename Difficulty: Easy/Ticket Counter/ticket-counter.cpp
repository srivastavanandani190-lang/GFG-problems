class Solution {
  public:
    int distributeTicket(int n, int k) {
        int start = 1, end = n;
        
        while (start < end) {
            // remove k from front
            start += k;
            if (start >= end) return end;
            
            // remove k from back
            end -= k;
            if (end <= start) return start;
        }
        
        return start;
    }
};