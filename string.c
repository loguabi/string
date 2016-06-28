#include<stdio.h>
#include<string.h>
int main()
{
 char str[10];
 char *rev;
 printf("Enter any string:");
 scanf("%s",str);
 rev=strrev(str);
 printf("Reverse string is:%s",rev);
 return 0;
 }
