vector<vector<int>> transpose(int a[][M], int n) {
    vector<vector<int>> t(M, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < M; j++) {
            t[j][i] = a[i][j];
        }
    }
    return t;
}
