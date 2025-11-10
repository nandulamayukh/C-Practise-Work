#include<stdio.h>
int pn(int a)
{
if(a>0)
    {
    return(1);
    }
else if(a<0)
    {
    return(-1);
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
scanf("%d", &a);
res=pn(a);
if(res==1)
printf("positive");
else if(res==-1)
printf("negative");
else
printf("value is 0");
}
