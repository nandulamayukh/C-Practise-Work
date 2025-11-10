#include <stdio.h>
int a;
int b;
int c;
int res;
int max (int a, int b, int c)
{
if(a>b&&a>c)
    return(a);
else if(b>a&&b>c)
    return(b);
    else
    return (c);
}
main()
{
printf("type in 3 numbers");
scanf("%d %d %d",&a, &b, &c);
res=max(a,b,c);
printf("max is %d", res);
}
