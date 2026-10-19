#include <stdio.h>
int main()
{
    float phy,chem,maths,eng,pe,total,percentage;
    printf("Enter the marks of 5 subjects \n");
    scanf("%f %f %f %f %f", &phy, &chem, &maths, &eng, &pe);
    total=phy+chem+maths+eng+pe;
    percentage=(total/500)*100;
    printf("Physics-%f\n", phy);
    printf("Chemistry-%f\n", chem);
    printf("Mathematics-%f\n", maths);
    printf("English-%f\n", eng);
    printf("Physical Education-%f\n", pe);
    printf("The total marks =%f\n", total);
    printf("The percentage =%f\n", percentage);
    return 0;
}