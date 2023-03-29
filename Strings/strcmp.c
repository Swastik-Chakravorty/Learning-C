#include<stdio.h>
#include<string.h>

int main()
{
    char st1[45] = "Holla";
    char *st2 = "Hello";
    int val = strcmp(st1, st2); //print '-', if mismaching char ascii value subs in '-', or print '+' if subs in '+', or '0' if same; st1 1st mismaching char '-' st2 mismaching char
    printf("Now the val is: %d", val);
    return 0;
}
