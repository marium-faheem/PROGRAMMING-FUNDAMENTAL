#include<stdio.h>
int main()
{
	int num1,num2;
	char operation;
	printf("====CALCULATOR====");
	printf("\nEnter first operand:");
	scanf("%d",&num1);
	printf("\nEnter second operand:");
	scanf("%d",&num2);
	printf("Enter operation(+,-,*,/,%%) :");
	scanf(" %c",&operation);
	switch(operation)
	{
		case'+':
			printf("Result=%d\n",num1+num2);
		break;
		case'-':
			printf("Result=%d\n",num1-num2);
		break;
		case'*':
			printf("Result=%d\n",num1*num2);
		break;
		case'/':
			if(num2==0)
			{
			printf("UNDEFINED");	
			}
			else
		    {
			printf("Result=%d\n",num1/num2);
			}
		break;
		case'%':
		    if(num2==0)
			{
			printf("UNDEFINED");	
			}
			else
		    {
			printf("Result=%d\n",num1%num2);
			}
		break;
		default:
			printf("INVALID OPERATOR");
	}
}