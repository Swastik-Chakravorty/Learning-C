#include<stdio.h>

struct vector
{
    int x, y;
};

int main()
{
    struct vector v1, v2;
    v1.x = 34;
    v1.y = 54;
    printf(" X dim is: %d\n Y dim is: %d\n", v1.x, v1.y);

    v2.x = 3644;
    v2.y = 5984;
    printf(" X dim is: %d\n Y dim is: %d\n", v2.x, v2.y);

    return 0;
}
