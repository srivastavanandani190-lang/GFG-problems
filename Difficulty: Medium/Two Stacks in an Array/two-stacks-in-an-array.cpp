class twoStacks {
    int arr[100];      // Maximum total elements <= 100
    int top1, top2;
    int size;

public:
    twoStacks() {
        size = 100;
        top1 = -1;
        top2 = size;
    }

    // Push into stack 1
    void push1(int x) {
        if (top1 + 1 < top2) {
            arr[++top1] = x;
        }
    }

    // Push into stack 2
    void push2(int x) {
        if (top1 + 1 < top2) {
            arr[--top2] = x;
        }
    }

    // Pop from stack 1
    int pop1() {
        if (top1 == -1)
            return -1;
        return arr[top1--];
    }

    // Pop from stack 2
    int pop2() {
        if (top2 == size)
            return -1;
        return arr[top2++];
    }
};