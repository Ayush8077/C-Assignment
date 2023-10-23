#include<stdio.h>
int main ()
{
    int a,b,c;
    printf(" Enter any number: \n");
    scanf("%d", &a);
    b = 1;
    while(b<=a)
    {
        c += b;
        b++;
    }
    printf("c= %d", c);
    
    return 0;
}