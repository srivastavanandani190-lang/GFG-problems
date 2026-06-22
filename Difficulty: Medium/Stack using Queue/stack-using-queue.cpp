class myStack {
    queue<int> q;

public:
    void push(int x) {
        q.push(x);

        int n = q.size();
        while (n > 1) {
            q.push(q.front());
            q.pop();
            n--;
        }
    }

    void pop() {
        if (!q.empty()) {
            q.pop();
        }
    }

    int top() {
        if (q.empty()) {
            return -1;
        }
        return q.front();
    }

    int size() {
        return q.size();
    }
};