#include <stdio.h>
#include <math.h>
main()
{
int a;
int b;

scanf("%d %d", &a,&b);
if(a>0 && b>0)
{
    if(a==b)
    printf("Quadrilateral is a square");
    else
    printf("Quadrilateral is a rectangle");
}
else
printf("error");
}
