#include<stdio.h>
int odeve (int a)
{
if(a%2==1)
    {
     return (1);
    }
else
    {
    return(0);
    }
}

main()
{
int a;
int res;
printf("Type in a number");
scanf("%d", &a);
res=odeve (a);
if(res==1)
{
printf("odd");
}
else
{
printf("even");
}
}
