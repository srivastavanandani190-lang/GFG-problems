int Search(vector<int> vec, int K) {
    int low = 0, high = vec.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Found the element
        if (vec[mid] == K) return mid;

        // Left half is sorted
        if (vec[low] <= vec[mid]) {
            if (K >= vec[low] && K < vec[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        // Right half is sorted
        else {
            if (K > vec[mid] && K <= vec[high]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
    }

    return -1; // Not found
}