#include<stdio.h>
int fib (int sum)
{
if(sum==1)
return (0);
else if (sum==2)
return (1);
else
return (fib(sum-1)+fib(sum-2));
}
main()
{
int a;
int i;
int j=1;
int in=0;
int sum;
scanf("%d", &a);
for (i=1;i<=a;i++)
printf("%d ", fib(i));
}

