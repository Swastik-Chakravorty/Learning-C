#include<stdio.h>
void decrypt(char *c)
{
    char *ptr = c;
    while(*ptr != '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
}

int main()
{
    char c[] = "Txbtujl!jt!gspn!Joejb";
    decrypt(c);
    printf("Decrypted string is: %s", c);
    return 0;
}
