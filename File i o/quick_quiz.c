#include <stdio.h>

int main()
{
    FILE *ptr;
    int num;
    int num2;
    ptr = fopen("Swastik123.txt", "r");
    if (ptr == NULL)
    {
        printf("This file doesn't exist\n");
    }
    else
    {
        fscanf(ptr, "%i", &num);
        fscanf(ptr, "%i", &num2);
        fclose(ptr);
        printf("The number1 is %i\n", num);
        printf("The number2 is %i\n", num2);
    }
    return 0;
}
