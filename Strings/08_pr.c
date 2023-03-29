#include<stdio.h>
int occurence(char st[], char c)
{
    char *ptr = st;
    int count = 0;
    while(*ptr != '\0')
    {
        if(*ptr == c)
        {
            count++;
        }
        ptr++;
    }
    return count;
}

int main()
{
    char st[] = "swastik is a sshhsss!";
    int count = occurence(st, 's');
    printf("Occurence = %d", count);
    return 0;
}
