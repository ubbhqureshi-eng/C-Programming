#include <stdio.h>
int main() {
 int n; Page 8
 int arr[100];
 printf("=================================\n");
 printf("Enter the Number of Values from 1 to 100: ");
 scanf("%d", &n);
 for (int i = 0; i < n; ++i) {
 printf("Enter number : %d: ", i + 1);
 scanf("%d", &arr[i]);
 }
 for (int i = 1; i < n; ++i) {
 if (arr[0] < arr[i]) {
 arr[0] = arr[i];
 }
 }
 printf("=================================\n");
 printf("Largest Value = %d\n", arr[0]);
 printf("=================================\n");
 return 0;
}