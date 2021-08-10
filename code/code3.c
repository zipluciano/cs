#include <stdio.h>
#include <stdlib.h>

//function prototype
int cube(int a);

int
main(int argc, char const *argv[])
{
    int x;
    printf("\nPut a integer: ");
    scanf("%d", &x);
    int y = cube(x);
    printf("\nThe cube of %d is %d\n", x, y);
    return 0;
}

int 
cube(int a)
{
    return a * a * a;
}