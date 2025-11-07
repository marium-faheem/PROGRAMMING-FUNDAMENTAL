//Find the number of triplets in the array whose sum is equal to the given value x
#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6,7,8};
	int NoOfTriplets=0;
	int x=12;
	for(int i=0; i<=7; i++){
		for(int j=i+1; j<=7; j++){
			for(int k=j+1; k<=7; k++){
				if(arr[i]+arr[j]+arr[k]==x){
					NoOfTriplets++;
					printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
				}
			}
	    }
	}
	printf("Total number of triplets: %d",NoOfTriplets);
}
	