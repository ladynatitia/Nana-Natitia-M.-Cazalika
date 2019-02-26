#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int n;
    int a=500;
    int b=250;
    int c=200;
    int d=100;
    int e=50;
    int f=25;
    int g=10;
    int h=5;
    int i=1;

    do
    {
        n=get_int("money: ");
    }
    while(n<0);
    int counter=0;

    while(n>=a)
    {
        n=n-a; counter++;
    }
    printf("%i\n",a);
    while(n>=b)
    {
    n=n-b; counter++;
    }
    printf("%i\n",b);
    while(n>=c)
    {
        n=n-c; counter++;
    }
    printf("%i\n",c);
    while(n>=d)
    {
        n=n-d; counter++;
    }
    printf("%i\n",d);
    while(n>=e)
    {
        n=n-e; counter++;
    }
    printf("%i\n",e);
    while(n>=f)
    {
        n=n-f; counter++;
    }
    printf("%i\n",f);
    while(n>=g)
    {
        n=n-g; counter++;
    }
    printf("%i\n",g);
    while(n>=h)
    {
        n=n-h; counter++;
    }
    printf("%i\n",h);
    while(n>=i)
    {
        n=n-i; counter++;
    }
    printf("%i\n",i);
    {
printf("The number of coins is %i ", counter);
    }
}