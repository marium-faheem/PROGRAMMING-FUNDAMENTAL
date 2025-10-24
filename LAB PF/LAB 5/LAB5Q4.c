#include<stdio.h>
int main(){
    int age;
    int hasID;//1=yes 0=no

    printf("Enter your age : ");
    scanf("%d",&age);
    if(age>=18 && age<=100){
            printf("You are eligible for voting");
    }else if(age<=18 && age>=0){
         printf("You are not eligible for voting");
    }else {
    	printf("Invalid age");
	}

         return 0;
}