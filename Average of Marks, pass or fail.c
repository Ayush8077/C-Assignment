#include<stdio.h>
#include<process.h>
#include<math.h>
int main()
{
    int a,b,c,d,e;
    float f;

    printf("Enter the marks of subject 1");
    scanf("%d", &a);
    printf("Enter the marks of subject 2");
    scanf("%d", &b);
    printf("Enter the marks of subject 3");
    scanf("%d", &c);
    printf("Enter the marks of subject 4");
    scanf("%d", &d);

    printf("Enter the marks of subject 5");
    scanf("%d", &e);
    f=(a+b+c+d+e)/5;
    
printf("Avg marks: %f\n" ,f);
    if (f>=35)
    {
        printf("Student is pass");
    }
    else
    {
        printf("student is fail"); 

    }
return 0;

}