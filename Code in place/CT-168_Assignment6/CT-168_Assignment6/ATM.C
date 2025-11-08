#include<stdio.h>
int main()
{
	printf("===ATM MACHINE===\n");
	int choice, balance=1000, amount;
    printf(" 1.withdraw\n 2.deposit\n 3.check balance\n 4.exit\n");
    scanf("%d",&choice);
    switch(choice)
    {
    	case 1:
    		printf("Enter amount to withdraw:");
    		scanf("%d",&amount);
    		printf("Remaining balance:");
    		balance-=amount;
    		printf("%d",balance);
    	break;
    	case 2:
    		printf("Enter amount to deposit:");
    		scanf("%d",&amount);
    		balance+=amount;
    		printf("Remaining balance:%d",balance);
    	break;
    	case 3:
    		printf("Remaining balance:%d",balance);
    	break;
    	case 4:
    		printf("Exiting");
    	break;
    	default:
    		printf("Invalid choice");
	}
}