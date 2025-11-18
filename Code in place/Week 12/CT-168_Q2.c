#include<stdio.h>
int main(){
	int n=7;
	float m=3.14;
	char c='M';
	int *p=&n;
	float *q=&m;
	char *d=&c;
	printf("int:%d\n",*p);//dereferencing
	printf("float:%f\n",*q);
	printf("char:%c",*d);
}