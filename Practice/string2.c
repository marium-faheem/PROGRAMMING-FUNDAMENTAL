#include<stdio.h>
#include<string.h>
int main(){
	char str[20]="College";
	//2nd index pe naya character insert karna hai
	for(int i=6; i>=3; i--){
		str[i+1]=str[i];
	}
	str[2]='k';
	printf("%s",str);
	return 0;
}