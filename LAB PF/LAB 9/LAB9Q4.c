//pointers example 4:Find out cube of a number using passing by reference.
#include <stdio.h>
void cubeByReference(int *nPtr) {
*nPtr = *nPtr * *nPtr * *nPtr;
}
int main( void ) {
int number = 5; // initialize number
printf( "The original value of number is %d \n", number );
//pass address of the number to cubeByReference
cubeByReference( &number);
printf( "The new value of number is %d", number );
}