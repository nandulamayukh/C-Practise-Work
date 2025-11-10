#include<stdio.h>
#include<math.h>
main()
{
int i;
int a;
int res=1;
scanf("%d", &a);
for(i=1;i<=a;i=i+1)
{
res=res*i;
}
printf("%d", res);
}
