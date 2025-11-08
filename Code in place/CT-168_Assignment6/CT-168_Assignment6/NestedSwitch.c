#include<stdio.h>
int main()
{
	int day,time;
	printf("NESTED SWITCH PROGRAM\n");
	printf("Enter a day of the week 1-7:");
	scanf("%d",&day);
	switch(day){
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("Is it 1.Morning or 2.Evening?");
			scanf("%d",&time);
	    switch(time){
		case 1:
			printf("Go to class");
		break;
		case 2:
			printf("Do homework");
		break;
		default:
			printf("Invalid time option");
	}
	    break;
	    case 6:
	    case 7:
	    	printf("Is it 1.Morning or 2.Evening?");
			scanf("%d",&time);
    	switch(time){
		case 1:
			printf("Play a sport");
		break;
		case 2:
			printf("Watch a movie");
		break;
		default:
			printf("Invalid time option");
	}	
	    break;	
		default:
		    printf("Invlid day");	
	}
}