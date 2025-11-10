#include<stdio.h>
main()
{
int add(int a, int b, int c);
int a;
int b;
int c;
int res;
scanf("%d %d %d", &a, &b, &c);
res=add(a,b,c);
printf("%d", res);
}
int sum(int a, int b, int c)
{
int res;
res=a+b+c;
return(res);
}
