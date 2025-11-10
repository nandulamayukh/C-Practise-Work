#include<stdio.h>
int fib (int sum)
{
if(sum==1)
return (0);
else if (sum==2)
return (1);
else
return (fib(sum)+fib(sum-1));

}
main()
{
int a;
int i;
int j=1;
int in=0;
int sum;
scanf("%d", &a);
printf("%d", fib(a));
}

