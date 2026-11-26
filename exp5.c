#include <stdio.h>
unsigned long long fibRecursive(int n) {
 if (n == 0) {
 return 0;
 }
 if (n == 1) {
 return 1;
 }
 return fibRecursive(n - 1) + fibRecursive(n - 2);
} Page 7
int main() {
 int N, i;
 unsigned long long t1 = 0, t2 = 1, nextTerm;
 int count = 1;
 printf("==================================\n");
 printf("Enter the number of terms N: ");
 if (scanf("%d", &N) != 1) {
 printf("Invalid input.\n");
 return 1;
 }
 if (N <= 0) {
 printf("Please enter a positive integer greater than 0.\n");
 } else {
 printf("Fibonacci Series up to %d terms (iterative):\n", N);
 do {
 printf("%llu ", t1);
 nextTerm = t1 + t2;
 t1 = t2;
 t2 = nextTerm;
 count++;
 } while (count <= N);
 printf("\n");
 printf("Fibonacci Series up to %d terms (recursive):\n", N);
 for (i = 0; i < N; i++) {
 printf("%llu ", fibRecursive(i));
 }
 printf("\n==================================\n");
 printf("\n");
 }
 return 0;
}