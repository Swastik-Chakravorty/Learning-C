#include<stdio.h>

int main()
{
    int age;
    int vipPass = 0;
    // vipPass = 1;
    printf("Enter your age ");
    scanf("%d", &age);
    
    // if(age<=70 && age>=18){
    if((age<=70 && age>=18) || vipPass==1){
    // if((age<=70 && age>=18) || !(vipPass==1)){
    // if(){
    //     if(){
    //         if(){
    //             if(){
    //                 ....
    //             }
    //         }
    //     }
    // }
        printf("You are 18+ and below 71, you can drive \n");
    }
    else{
        printf("You can't drive \n");
    }

    return 0;
}
