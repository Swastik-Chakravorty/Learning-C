#include<stdio.h>
void goodmorning();
void goodafternoon();
void goodnight();

int main()
{
    printf("This is to greeting you \n");
    goodmorning(); 
    return 0;
}

void goodmorning(){
    printf("Hello dear Good Morning! \n");
    goodafternoon();
}

void goodafternoon(){
    printf("Hello dear Good Afternoon! \n");
    goodnight();
}

void goodnight(){
    printf("Hello dear Good Night! \n");
}