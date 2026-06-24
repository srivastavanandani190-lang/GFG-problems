class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int x) {
        data = x;
        prev = next = nullptr;
    }
};

class myDeque {
    Node *f, *r;

public:
    myDeque() {
        f = nullptr;
        r = nullptr;
    }

    void insertFront(int x) {
        if (f == nullptr) {
            f = r = new Node(x);
        }
        else {
            Node* temp = new Node(x);
            temp->next = f;
            f->prev = temp;
            f = temp;
        }
    }

    void insertRear(int x) {
        if (f == nullptr) {
            f = r = new Node(x);
        }
        else {
            Node* temp = new Node(x);
            r->next = temp;
            temp->prev = r;
            r = temp;
        }
    }

    void deleteFront() {
        if (f == nullptr) {
            return;
        }

        Node* temp = f;
        f = f->next;
        delete temp;

        if (f != nullptr) {
            f->prev = nullptr;
        }
        else {
            r = nullptr;
        }
    }

    void deleteRear() {
        if (f == nullptr) {
            return;
        }

        Node* temp = r;
        r = r->prev;
        delete temp;

        if (r != nullptr) {
            r->next = nullptr;
        }
        else {
            f = nullptr;
        }
    }

    int getFront() {
        if (f == nullptr) {
            return -1;
        }
        return f->data;
    }

    int getRear() {
        if (r == nullptr) {
            return -1;
        }
        return r->data;
    }
};