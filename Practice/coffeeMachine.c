#include<stdio.h>
int main(){
	char type;
	char size;
	float total=0;
	float t;
	printf("Enter type of coffee (B for Black/W for white):");
	scanf(" %c",&type);
	printf("\nEnter size of coffee (S for single/D for double):");
	scanf(" %c",&size);
	
	printf("\n===Coffee Machine Instructions===\n");
	//-------------- white coffee ----------------
	if(type=='W' || type=='w'){
	t=15; if(size=='D'|| size=='d') t=t+t/2;
	printf("Put Water....%.1f\n",t); total+=t;
	
	t=15; if(size=='D'|| size=='d') t=t+t/2;
	printf("Add sugar....%.1f\n",t); total+=t;
	
	t=20; if(size=='D'|| size=='d') t=t+t/2;
	printf("Mix Well....%.1f\n",t); total+=t;
	
	t=2; if(size=='D'|| size=='d') t=t+t/2;
	printf("Add Coffee....%.1f\n",t); total+=t;
	
	t=4; if(size=='D'|| size=='d') t=t+t/2;
	printf("Add Milk....%.1f\n",t); total+=t;
	
	t=20; if(size=='D'|| size=='d') t=t+t/2;
	printf("Mix well....%.1f\n",t); total+=t;
    }
	
	//--------------black coffee------------------
	else if (type == 'B' || type == 'b') {

    t = 20; if (size == 'D' || size == 'd') t = t + t/2;
    printf("Put Water .... %.1f mins\n", t); total += t;

    t = 20; if (size == 'D' || size == 'd') t = t + t/2;
    printf("Add Sugar .... %.1f mins\n", t); total += t;

    t = 25; if (size == 'D' || size == 'd') t = t + t/2;
    printf("Mix Well ..... %.1f mins\n", t); total += t;

    t = 15; if (size == 'D' || size == 'd') t = t + t/2;
    printf("Add Coffee ... %.1f mins\n", t); total += t;

    t = 25; if (size == 'D' || size == 'd') t = t + t/2;
    printf("Mix Well ..... %.1f mins\n", t); total += t;
    }

    else {
    printf("Invalid Coffee Type!\n");
    return 0;
    }

    printf("\nTotal Coffee Time = %.1f minutes\n", total);
    printf("Your coffee is ready!\n");
	
	
	
	
	
	return 0;
}