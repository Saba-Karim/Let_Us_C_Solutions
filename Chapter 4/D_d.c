#include<stdio.h>
int main()
{
    float weight, height, bmi;
    printf("Enter the weight (in kg) and height (in meters):"); scanf("%f%f",&weight,&height);
    bmi=weight/(height*height);
    printf("BMI         : %f\n",bmi);
    if (bmi<15)
    {
        printf("BMI category: Starvation");
    }
    else if (bmi<17.5)
    {
        printf("BMI category: Anorexic");
    }
    else if (bmi<18.5)
    {
        printf("BMI category: Underweight");
    }
    else if (bmi<24.9)
    {
        printf("BMI category: Ideal");
    }
    else if (bmi<25.9)
    {
        printf("BMI category: Overweight");
    }
    else if (bmi<30.9)
    {
        printf("BMI category: Obese");
    }
    else if (bmi>=40)
    {
        printf("BMI category: Morbidly Obese");
    }
    else
        printf("BMI category: Un-categorised");
    return 0;
}