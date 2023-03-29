#include<stdio.h>

int main()
{
    int columns, rows;
    int arr[columns][rows];
    printf("Enter the number of column: ");
    scanf("%d", &columns);

    printf("Enter the number of row: ");
    scanf("%d", &rows);

    for(int i=0; i<columns; i++)
    {
        for(int j=0; j<rows; j++)
        {
            printf("Enter the values of %d column and %d row: \n", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The matrix will be look like: \n");
    for(int i=0; i<columns; i++)
    {
        for(int j=0; j<rows; j++)
        {
            printf(" %d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
