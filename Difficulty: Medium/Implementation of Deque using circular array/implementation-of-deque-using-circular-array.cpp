class myDeque {
    int front, rear, size;
    int *arr;

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return ((rear + 1) % size) == front;
    }

public:
    myDeque(int n) {
        size = n;
        arr = new int[n];
        front = rear = -1;
    }

    void insertFront(int x) {
        if (isEmpty()) {
            front = rear = 0;
            arr[0] = x;
            return;
        }

        if (isFull())
            return;

        front = (front - 1 + size) % size;
        arr[front] = x;
    }

    void insertRear(int x) {
        if (isEmpty()) {
            front = rear = 0;
            arr[0] = x;
            return;
        }

        if (isFull())
            return;

        rear = (rear + 1) % size;
        arr[rear] = x;
    }

    int deleteFront() {
        if (isEmpty())
            return -1;

        int ans = arr[front];

        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % size;
        }

        return ans;
    }

    int deleteRear() {
        if (isEmpty())
            return -1;

        int ans = arr[rear];

        if (front == rear) {
            front = rear = -1;
        } else {
            rear = (rear - 1 + size) % size;
        }

        return ans;
    }

    int frontEle() {
        if (isEmpty())
            return -1;

        return arr[front];
    }

    int rearEle() {
        if (isEmpty())
            return -1;

        return arr[rear];
    }

    ~myDeque() {
        delete[] arr;
    }
};