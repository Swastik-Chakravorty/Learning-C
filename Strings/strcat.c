#include<stdio.h>
#include<string.h>

int main()
{
    char st1[45] = "Hello";
    char *st2 = "Swastik";
    strcat(st1, st2); // st1 now contain 'HelloSwastik' without space
    printf("Now the st1 is: %s", st1);
    return 0;
}
