#include<stdio.h>
int main(){
	struct cricketers{
		char name[20];
		int age;
		int noOfMatches;
		float avg;
	};
	struct sricketer arr[2]; //you can take as many inputs
	for(int i=0; i<2; i++){
		scanf("%[^\n]s",&arr[i].name);
		scanf("%d",&arr[i].age);
		scanf("%d",&arr[i].noOfMatches);
		scanf("%f"),&arr[i].avg);
	}
		for(int i=0; i<2; i++){
		scanf("Name:%s\n",arr[i].name);
		scanf("Age:%d\n",arr[i].age);
		scanf("No of matches played:%d\n",arr[i].noOfMatches);
		scanf("Average:%f\n\n"),arr[i].avg);
	}
}