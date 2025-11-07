#include<stdio.h>
#include<string.h>
int main(){
	//string concatenate (strcat)
	char src1[]="Hello ";
	char src2[]="World";
	strcat(src1, src2); //src 1 become Hello World
	printf("%s\n",src1);
	return 0;
}