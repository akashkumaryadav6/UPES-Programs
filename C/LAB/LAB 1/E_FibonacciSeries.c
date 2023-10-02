// Write a program to generate the Fibonacci series using recursive function.

#include <stdio.h>

void fibonacci(int n, int* fib_series) {
    if (n <= 0) {
        return;
    } else if (n == 1) {
        fib_series[0] = 0;
        return;
    } else if (n == 2) {
        fib_series[0] = 0;
        fib_series[1] = 1;
        return;
    } else {
        fibonacci(n - 1, fib_series);
        fib_series[n - 1] = fib_series[n - 2] + fib_series[n - 3];
    }
}

int main() {
    int n;
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        int fib_series[n];
        fibonacci(n, fib_series);

        printf("Fibonacci Series:\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", fib_series[i]);
        }
        printf("\n");
    }

    return 0;
}
