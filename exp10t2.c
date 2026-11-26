#include <stdio.h>
int main() {
 int arr[] = {12, 7, 25, 3, 18, 9};
 int size = sizeof(arr) / sizeof(arr[0]);
 int *ptr;
 int i;
 printf("=================================\n");
 ptr = arr;
 printf("Original array : ");
 for (i = 0; i < size; i++) {
 printf("%d ", *(ptr + i));
 }
 ptr = arr + size - 1;
 printf("\nReverse order : ");
 for (i = 0; i < size; i++) {
 printf("%d ", *(ptr - i));
 }
 printf("\n=================================\n");
 return 0;
}