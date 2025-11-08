#include<stdio.h>
int main(void)
{
    char a[11] = "hello world";
    int i;
    for (i = 0; i <= 9; i++) {
        a[i] = a[i + 1];
        printf("%d \t %s \n", i, a);
    }
    printf("\n %d", a);
}
/*OUTPUT:-
0    ello world
1    llo world
2    lo world
3    o world
4     world
5    world
6    orld
7    rld
8    ld
9    d
 6422272   <-- some memory address (varies)*/

