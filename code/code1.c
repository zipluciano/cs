#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char *argv[])
{
    int a, n = 0, b = 2;    
    printf("Put a integer number: ");
    scanf("%d", &a);
    if (a == 42)
    {
        printf("You know Douglas Adams... %c", b);
    }
    while (a != 42)
    {
        if (n < 5)    
        {
            printf("Put another number: ");
            scanf("%d", &a);
            if (a == 42)
            {                
                printf("You know Douglas Adams... %c", b);
            }
        }
        n++;
        if (n >= 5)
        {
            printf("You have no more tries, sorry.");
            break;
        }
    }    
    return 0;
}