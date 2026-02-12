// User function Template for C++

int posAverage(int arr[], int size) {
    int sum = 0;
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] >= 0) {
            sum += arr[i];
            count++;
        }
    }

    if (count == 0) {
        return 0;   // no positive numbers
    }

    return sum / count;  // integer average
}
