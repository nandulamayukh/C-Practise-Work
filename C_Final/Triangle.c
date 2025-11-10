#include <stdio.h>
#include <math.h>
main()
{
int a;
int b;
int c;

scanf("%d %d %d", &a,&b,&c);
if(a>0 && b>0 && c>0)
{
    if(a+b>c && b+c>a && c+a>b)
    {
        if(a==b &&b==c)
        printf("Equilateral");
        else if(a==b || b==c ||c==a)
        printf("Isosceles");
        else
        printf("Scalene");
    }
    else
    printf("not triangle");
}
else
printf("error");
}
