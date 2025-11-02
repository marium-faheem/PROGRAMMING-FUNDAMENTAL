//pointers example 2 : using constant pointer
#include <stdio.h>
int main(){
int y = 5;
int z = 6;
int const *yPtr = &y;
printf("%p\n", yPtr);
*yPtr = &z;
printf("%p\n", yPtr);
}
//code is unable to run because a constant pointer can not change the address it is containing