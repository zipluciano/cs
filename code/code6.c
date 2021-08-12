#include <stdio.h>
#include <stdlib.h>

int fac(int n);

int
main(int argc, char *argv[])
{
    int n, f;
    printf("\nType a integer number: ");
    scanf("%d", &n);
    f = fac(n);
    printf("The factorial of %d is %d\n", n, f);
    return 0;
}

// function that implement the factorial, using recursion
int
fac(int n)
{    
    if (n <= 1)
    {
        return 1;
    }    
    return (n * fac(n - 1));
}