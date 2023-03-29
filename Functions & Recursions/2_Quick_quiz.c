#include<stdio.h>
void goodmorning();
void goodafternoon();
void goodnight();

int main()
{
    printf("This is to greeting you \n");
    goodmorning();
    goodafternoon();
    goodnight();
    return 0;
}

void goodmorning(){
    printf("Hello dear Good Morning! \n");
}

void goodafternoon(){
    printf("Hello dear Good Afternoon! \n");
}

void goodnight(){
    printf("Hello dear Good Night! \n");
}