#include<stdio.h>

int main()
{
    char str[] = "Hello I'm Swastik"; // ***Same*** char *ptr = "Hello I'm Swastik";
    printf("%s", str); // *** Same*** printf("%s", ptr);
    return 0;
}
