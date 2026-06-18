class kStacks {
    int *arr;      // stores elements
    int *top;      // top index of each stack
    int *next;     // next free/previous element
    int freeSpot;  // first free index
    int n, k;

public:
    kStacks(int n, int k) {
        this->n = n;
        this->k = k;

        arr = new int[n];
        top = new int[k];
        next = new int[n];

        // Initially all stacks are empty
        for (int i = 0; i < k; i++) {
            top[i] = -1;
        }

        // Create free list
        for (int i = 0; i < n - 1; i++) {
            next[i] = i + 1;
        }
        next[n - 1] = -1;

        freeSpot = 0;
    }

    void push(int x, int i) {
        // Overflow
        if (freeSpot == -1)
            return;

        // Get free index
        int index = freeSpot;

        // Update free spot
        freeSpot = next[index];

        // Insert element
        arr[index] = x;

        // Link new element with previous top
        next[index] = top[i];

        // Update top
        top[i] = index;
    }

    int pop(int i) {
        // Underflow
        if (top[i] == -1)
            return -1;

        int index = top[i];

        // Move top to next element
        top[i] = next[index];

        // Add removed index back to free list
        next[index] = freeSpot;
        freeSpot = index;

        return arr[index];
    }
};