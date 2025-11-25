#include<stdio.h>
#include<string.h>
int main (void)
{
char string [5];
int len;
printf("Enter the string:");
gets(string);
len = strlen(string);
printf("%d",len);
}