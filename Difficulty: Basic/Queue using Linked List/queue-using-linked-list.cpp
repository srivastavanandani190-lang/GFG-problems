class Node {
public:
    int data;
    Node* next;

    Node(int new_data) {
        data = new_data;
        next = nullptr;
    }
};

class myQueue {
    Node* front;
    Node* rear;
    int sz;

public:
    myQueue() {
        front = rear = nullptr;
        sz = 0;
    }

    bool isEmpty() {
        return front == nullptr;
    }

    void enqueue(int x) {
        Node* temp = new Node(x);

        if (isEmpty()) {
            front = rear = temp;
        } else {
            rear->next = temp;
            rear = temp;
        }

        sz++;
    }

    void dequeue() {
        if (isEmpty())
            return;

        Node* temp = front;
        front = front->next;
        delete temp;

        sz--;

        if (front == nullptr)
            rear = nullptr;
    }

    int getFront() {
        if (isEmpty())
            return -1;

        return front->data;
    }

    int size() {
        return sz;
    }
};