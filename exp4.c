int isPrime(int num) {
 int j;
 if (num <= 1) {
 return 0;
 }
 j = 2;
 while (j <= num / 2) {
 if (num % j == 0) {
 return 0;
 }
 j++;
 }
 return 1;
}
int main() {
 int start, end, i;
 printf("===========================\n");
 printf("Enter lower limit : ");
 scanf("%d", &start);
 printf("Enter upper limit : ");
 scanf("%d", &end);
 printf("Prime numbers between %d and %d are:\n", start, end);
 i = start;
 while (i <= end) {
 if (isPrime(i) == 1) {
 printf("%d ", i);
 }
 i++;
 }
 printf("\n");
 printf("===========================\n");
 return 0;
}