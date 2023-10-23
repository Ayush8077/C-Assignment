#include <stdio.h>
 
int main()
{
    float eng, phy, chem, math, comp; 
    float total , percentage;
 
    printf("Enter marks of english:");
    scanf("%f", &eng);
    printf("Enter marks of physics:");
    scanf("%f",&phy );
    printf("Enter marks of chem:");
    scanf("%f", &chem);
    printf("Enter marks of math:");
    scanf("%f", &math);
    printf("Enter marks of comp:");
    scanf("%f", &comp);
    total = eng + phy + chem + math + comp;
    percentage = (total / 500.0) * 100;
 
    printf("Total marks = %.2f\n", total);
    printf("Percentage = %.2f", percentage);
 
    return 0;
}