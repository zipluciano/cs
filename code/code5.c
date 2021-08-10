#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int 
main(int argc, char *argv[])
{
    char* string;
    printf("\nType something: ");
    scanf("%s", string);
    // not printing "\0"
    for (int i = 0; i < strlen(string); i++)
    {
        printf("\n%c", string[i]);
    }
    printf("\n");
    return 0;
}