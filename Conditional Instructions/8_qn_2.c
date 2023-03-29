#include <stdio.h>

int main()
{
    float total, phy, chem, math;
    printf("Enter your marks in Physics out of 100 :");
    scanf("%f", &phy);
    printf("Enter your marks in Chemistry out of 100 :");
    scanf("%f", &chem);
    printf("Enter your marks in Math out of 100 :");
    scanf("%f", &math);
    total = (phy + chem + math) / 3;
    if (phy >= 80 && chem >= 80 && math >= 80 && total >= 75 && phy<=100 && chem<=100 && math<=100)
    {
        printf("Congratulations! you got letters in all 3 subjects and you passed in the exam with star");
    }
    else if (phy >= 80 && chem >= 80 && math >= 33 && total >= 75 && phy<=100 && chem<=100 && math<80)
    {
        printf("Congratulations! you got letters in Physics and Chemistry and you passed in the exam with star");
    }
    else if (phy >= 80 && chem >= 80 && math >= 33 && total >= 60 && phy<=100 && chem<=100 && math<80 && total<75)
    {
        printf("Congratulations! you got letters in Physics and Chemistry and you passed in the exam with 1st Division");
    }
    else if (phy >= 80 && chem >= 33 && math >= 80 && total >= 75 && phy<=100 && chem<80 && math<=100)
    {
        printf("Congratulations! you got letters in Physics and Math and you passed in the exam with star");
    }
    else if (phy >= 80 && chem >= 33 && math >= 80 && total >= 60 && phy<=100 && chem<80 && math<=100 && total<75)
    {
        printf("Congratulations! you got letters in Physics and Math and you passed in the exam with 1st Division");
    }
    else if (phy >= 33 && chem >= 80 && math >= 80 && total >= 75 && phy<80 && chem<=100 && math<=100)
    {
        printf("Congratulations! you got letters in Chemistry and Math and you passed in the exam with star");
    }
    else if (phy >= 33 && chem >= 80 && math >= 80 && total >= 60 && phy<80 && chem<=100 && math<=100 && total<75)
    {
        printf("Congratulations! you got letters in Chemistry and Math and you passed in the exam with 1st Division");
    }
    else if (phy >= 80 && chem >= 33 && math >= 33 && total >= 75 && phy<=100 && chem<80 && math<80)
    {
        printf("Congratulations! you got letter in Physics and you passed in the exam with star");
    }
    else if (phy >= 80 && chem >= 33 && math >= 33 && total >= 60 && phy<=100 && chem<80 && math<80 && total<75)
    {
        printf("Congratulations! you got letter in Physics and you passed in the exam with 1st Division");
    }
    else if (phy >= 80 && chem >= 33 && math >= 33 && total >= 50 && phy<=100 && chem<80 && math<80 && total<60)
    {
        printf("Congratulations! you got letter in Physics and you passed in the exam with 2nd Division");
    }
    else if (phy >= 33 && chem >= 80 && math >= 33 && total >= 75 && phy<80 && chem<=100 && math<80)
    {
        printf("Congratulations! you got letter in Chemistry and you passed in the exam with star");
    }
    else if (phy >= 33 && chem >= 80 && math >= 33 && total >= 60 && phy<80 && chem<=100 && math<80 && total<75)
    {
        printf("Congratulations! you got letter in Chemistry and you passed in the exam with 1st Division");
    }
    else if (phy >= 33 && chem >= 80 && math >= 33 && total >= 50 && phy<80 && chem<=100 && math<80 && total<60)
    {
        printf("Congratulations! you got letter in Chemistry and you passed in the exam with 2nd Division");
    }
    else if (phy >= 33 && chem >= 33 && math >= 80 && total >= 75 && phy<80 && chem<80 && math<=100)
    {
        printf("Congratulations! you got letter in Math and you passed in the exam with star");
    }
    else if (phy >= 33 && chem >= 33 && math >= 80 && total >= 60 && phy<80 && chem<80 && math<=100 && total<75)
    {
        printf("Congratulations! you got letter in Math and you passed in the exam with 1st Division");
    }
    else if (phy >= 33 && chem >= 33 && math >= 80 && total >= 50 && phy<80 && chem<80 && math<=100 && total<60)
    {
        printf("Congratulations! you got letter in Math and you passed in the exam with 2nd Division");
    }
    else if (phy >= 33 && chem >= 33 && math >= 33 && total >= 75 && phy<=100 && chem<=100 && math<=100)
    {
        printf("Congratulations! you passed in the exam with star");
    }
    else if (phy >= 33 && chem >= 33 && math >= 33 && total >= 60 && phy<=100 && chem<=100 && math<=100 && total<75)
    {
        printf("Congratulations! you passed in the exam with 1st Division");
    }
    else if (phy >= 33 && chem >= 33 && math >= 33 && total >= 50 && phy<=100 && chem<=100 && math<=100 && total<60)
    {
        printf("Congratulations! you passed in the exam with 2nd Division");
    }
    else if (phy >= 33 && chem >= 33 && math >= 33 && total >= 40 && phy<=100 && chem<=100 && math<=100 && total<50)
    {
        printf("Congratulations! you passed in the exam");
    }
    else if (phy>100 || chem>100 || math>100)
    {
        printf("Please enter a valid marks");
    }
    else
    {
        printf("Soryy! you are failed in the exam, betterluck next time");
    }

    return 0;
}
