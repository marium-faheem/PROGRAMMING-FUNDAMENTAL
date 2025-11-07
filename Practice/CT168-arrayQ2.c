#include<stdio.h>
int main(){
    int arr[4]={1,2,3,4};
    //printing the given array
    for(int i=0; i<4; i++){
    	printf("%d",arr[i]);
	}
	printf("\n");
	//counting even numbers in an array
	int count=0;
        for(int i=0; i<4; i++){
        	if(arr[i]%2==0) count+=1;
		}
		printf("%d",count);
        }