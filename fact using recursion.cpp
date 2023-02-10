#include <stdio.h>

long long int findFactorial(int n) {
    long long int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &n);
    printf("The factorial of %d is: %lld", n, findFactorial(n));
    return 0;
}

