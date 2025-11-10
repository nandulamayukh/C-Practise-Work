#include <stdio.h>
int a;
int b;
int res;
int min(int a, int b)
{
if (a<b)
return(a);
else
return(b);
}
main()
{
printf("type in two numbers");
scanf("%d %d", &a, &b);
res=min(a,b);
printf("minimum is %d", res);
}
