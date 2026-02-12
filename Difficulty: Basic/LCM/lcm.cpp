int LCM(int a, int b) {
    int maxVal = max(a, b);

    while (true) {
        if (maxVal % a == 0 && maxVal % b == 0)
            return maxVal;
        maxVal++;
    }
}
