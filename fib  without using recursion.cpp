#include <stdio.h>

void findFibonacci(int n) {
    int a = 0, b = 1, c;
    printf("%d %d ", a, b);
    for (int i = 2; i < n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
}

int main() {
    int n;
    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &n);
    findFibonacci(n);
    return 0;
}

