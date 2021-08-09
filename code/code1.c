#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char *argv[])
{
    int a, n = 0;    
    printf("Put a integer number: ");
    scanf("%d", &a);
    while (a != 42)
    {
        if (n < 5)    
            {
            printf("Put another number: ");
            scanf("%d", &a);
            if (a == 42)
            {
                printf("You know Douglas Adams... :P");
            }
            }
        n = n + 1;
        if (n >= 10)
        {
            printf("You have no more tries, sorry.");
            break;
        }
    }    
    return 0;
}