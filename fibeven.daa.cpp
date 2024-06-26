#include <stdio.h>
void printFibonacciAndEvenSum(int N) {
    int a = 0, b = 1;
    int evenSum = 0;
    printf("Fibonacci series up to %d: ", N);
    while (a <= N) {
        printf("%d ", a);
        if (a % 2 == 0) {
            evenSum += a;
        }
        int next = a + b;
        a = b;
        b = next;
    }
    printf("\nSum of even Fibonacci numbers: %d\n", evenSum);
}
int main() {
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);
    printFibonacciAndEvenSum(N);
    return 0;
}

