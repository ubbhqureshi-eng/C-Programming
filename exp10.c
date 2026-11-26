#include <stdio.h>
int main() {
 int num1, num2, sum;
 int *ptr1, *ptr2;
 ptr1 = &num1;
 ptr2 = &num2; Page 11
 printf("=================================\n");
 printf("Enter 1st number values : ");
 scanf("%d", ptr1);
 printf("Enter 2nd number values : ");
 scanf("%d", ptr2);
 sum = *ptr1 + *ptr2;
 printf("Sum of those values = %d\n", sum);
 printf("=================================\n");
 return 0;
}