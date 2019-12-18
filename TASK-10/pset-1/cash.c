#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float x;
    int a,b,c,d;
    printf("change: ");
    scanf("%f",&n);

    a = n/0.25;
    b=(n-(a*0.25))/0.1;
    c=(n-(a*0.25)-(b*0.1))/0.05;
    d=(n-(a*0.25)-(b*0.1)-(c*0.05))/0.01;

    printf("%d\n",a+b+c+d);
}
