#include <stdio.h>
int main() {
 int r, c, a[100][100], b[100][100], sum[100][100], i, j;
 printf("=================================\n");
 printf("Enter the number of rows from 1 to 100 : ");
 scanf("%d", &r);
 printf("Enter the number of columns from 1 to 100 : ");
 scanf("%d", &c);
 printf("\nEnter values of 1st matrix:\n");
 for (i = 0; i < r; ++i)
 for (j = 0; j < c; ++j)
 {
 printf("Enter value a%d%d: ", i + 1, j + 1);
 scanf("%d", &a[i][j]);
 }
 printf("Enter value of 2nd matrix:\n");
 for (i = 0; i < r; ++i)
{
 for (j = 0; j < c; ++j)
 {
 printf("Enter value b%d%d: ", i + 1, j + 1);
 scanf("%d", &b[i][j]);
 }
}
 for (i = 0; i < r; ++i)
 {
 for (j = 0; j < c; ++j)
 {
 sum[i][j] = a[i][j] + b[i][j];
 }
}
 printf("=================================\n");
 printf("Sum of two matrices are : \n");
 printf("=================================\n");
 for (i = 0; i < r; ++i)
 for (j = 0; j < c; ++j) {
 printf("%d ", sum[i][j]);
 }
 return 0;
}