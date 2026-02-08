int nextPrime(int n) {
    for (int num = n + 1; ; num++) {
        bool prime = true;
        if (num <= 1) prime = false;

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                prime = false;
                break;
            }
        }

        if (prime) return num;
    }
}
