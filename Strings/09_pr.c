#include<stdio.h>
#include<stdbool.h>

bool occurence(char st[], char c)
{
    char *ptr = st;

    while(*ptr != '\0')
    {
        if(*ptr == c)
        {
            return true;
        }
        ptr++;

    }
    return false;
}

int main()
{
    char st[] = "swastik is a sshhsss!";
    bool var = occurence(st, 'h');
    if(var == true)
    {
    printf("Yes the character 'h' is present in the string");
    }
    else
    {
    printf("Sorry the character 'h' isn't present in the string");
    }
    return 0;
}
