class Solution {
  public:
    void printTillN(int n) {
        // code here
        // Base case: if n is less than 1, stop execution
        if (n < 1) {
            return;
        }
        
        // Recursive call with n - 1 to print smaller numbers first
        printTillN(n - 1);
        
        // Print the current number followed by a space
        cout << n << " ";
    }
};