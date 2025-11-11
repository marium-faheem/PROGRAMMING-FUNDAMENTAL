#include<stdio.h>
#include<string.h>
int main(){
	struct Person{
		char name[20];
		int salary;
		int age;
	};
	struct Person a;
	strcpy(a.name,"Marium");
	a.salary=200000;
	a.age=20;
	
	struct Person b;
	strcpy(b.name,"Memoona");
	b.salary=200000;
	b.age=19;
	
	printf("%s",a.name);
	printf("%d",b.age);
	
	
}