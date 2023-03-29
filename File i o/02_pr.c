#include<stdio.h>

int main()
{
    FILE *fptr;
    int num;
    printf("Enter the number you want the table of: ");
    scanf("%d", &num);
    fptr = fopen("table.txt", "w");
    for (int i = 0; i < 10; i++)
    {
        fprintf(fptr, "%d X %d = %d\n", num, (i+1), num*(i+1));
    }
    fclose(fptr);
    printf("Successfully generated table of %d to table.txt\n", num);
    return 0;
}
