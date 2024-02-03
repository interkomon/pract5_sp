int sum(int* arr, int N) {
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += arr[i];
    }
    return sum;
}

float sum(float* arr, int N) {
    float sum = 0.0;
    for (int i = 0; i < N; i++) {
        sum += arr[i];
    }
    return sum;
}

double sum(double* arr, int N) {
    double sum = 0.0;
    for (int i = 0; i < N; i++) {
        sum += arr[i];
    }
    return sum;
}
