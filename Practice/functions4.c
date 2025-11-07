#include<stdio.h>
void pakistan()
{
	printf("You are now in Pakistan");
	return 0;
}
void england()
{
	printf("You are now in England\n");
	pakistan();
}
void india()
{
	printf("You are now in India\n");
	england();
}
int main()
{
	printf("You are in main\n");
	india();
}