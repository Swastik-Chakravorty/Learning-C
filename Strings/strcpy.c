#include<stdio.h>
#include<string.h>

int main()
{
    char *source = "Swastik";
    char target[45];
    strcpy(target, source); // target now contain 'Swastik'
    printf("Now the st2 is: %s", target);
    return 0;
}
