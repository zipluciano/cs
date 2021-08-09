#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char *argv[])
{
    for (int i = 97; i <= 122; i++)
    {
        printf("Char value: %c | Int value: %d\n", i, i);
    }
    printf("\n");
    for (int i =65; i <= 90; i++)
    {
        printf("Char value: %c | Int value: %d\n", i, i);
    }
    return 0;
}