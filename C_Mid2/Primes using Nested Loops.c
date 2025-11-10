#include<stdio.h>
main()
{
int i ;
int j;
int n;
scanf("%d",&n);
for(i=3;i<n;i++)
{
for(j=2;j<i;j++)
{
    if(i%j!=0)
    {printf("%d prime\n", i);
        break;}
    else break;
}
}
}
