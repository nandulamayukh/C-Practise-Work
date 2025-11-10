#include<stdio.h>
#include<math.h>
main()
{
int a;
int i;
int res=1;
scanf("%d",  &a);
for(i=a;i>0;i=i-1)
{
res=res*i;
printf("%d ", res);
}
printf("%d ", res);
}
