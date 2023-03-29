#include<stdio.h>

int main()
{
    char *ptr = "SWASTIK";
    // char ptr[] = "SWASTIK"; //Once a string is defined using char st[] = "Swastik", it cannot be reinitialized to sothething else
    ptr = "Swastik Chakravorty";
        printf("%s", ptr);
    return 0;
}
