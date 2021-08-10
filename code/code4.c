#include <stdio.h>
#include <stdlib.h>

// define something that is imutable
#define string char*

int 
main(int argc, char const *argv[])
{
    string name;
    printf("What's your first name? ");
    scanf("%s", &name);
    printf("Hi %s!", &name);
    return 0;
}
