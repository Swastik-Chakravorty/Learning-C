#include<stdio.h>

int main()
{
    char source[] = "swastik";
    char target[50];
    int i = 0;
    while(source[i] != '\0')
    {
        target[i] = source[i];
        i++;
    }
    target[i] = '\0';
    printf("Copied string is: %s", target);
    return 0;
}
