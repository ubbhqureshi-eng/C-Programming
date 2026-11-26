#include <stdio.h>
void countCalls() {
static int calls = 0;
calls++;
 printf("Call number: %d\n", calls);
}
int main() {
 countCalls();
 countCalls();
 countCalls();
 countCalls();
 countCalls();
 countCalls();
 countCalls();
 countCalls();
 countCalls();
 countCalls();
 return 0;
}