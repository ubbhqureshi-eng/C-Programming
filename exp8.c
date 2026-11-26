#include <stdio.h>
int main()
{
 char str[100];
 int i,length=0;
 printf("=================================\n");
 printf("Enter a string no. : \n");
 scanf("%s",str);
 for(i=0; str[i]!='\0'; i++)
 {
 length++;
 }
 printf("Length of input string is : %d\n",length);
 printf("=================================\n");
 return 0;
}