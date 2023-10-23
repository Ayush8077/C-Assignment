#include<stdio.h>
int main()
{
    int p,t;
    float r,si;
    printf("\n\nEnter the principal amount:");
    scanf("%d", &p);
    printf("\n\n Enter time:");
    scanf("%d", &t);
    printf("\n\nEnter the rate:");
    scanf("%f", &r);
    si= p*r*t/100;
    printf(" The simple interest is: %f", si);
    
}