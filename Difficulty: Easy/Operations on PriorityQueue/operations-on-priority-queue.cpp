class Solution {
  public:
    // Function to insert element into the queue
    static void insert(priority_queue<int>& q, int k) {
        q.push(k);
    }

    // Function to find an element k
    static bool find(priority_queue<int>& q, int k) {
        priority_queue<int> temp = q;   // Copy the queue

        while (!temp.empty()) {
            if (temp.top() == k)
                return true;
            temp.pop();
        }
        return false;
    }

    // Function to delete the max element from queue
    static int deleteValue(priority_queue<int>& q) {
        int x = q.top();
        q.pop();
        return x;
    }
};