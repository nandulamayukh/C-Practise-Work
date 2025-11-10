#include<stdio.h>
int *adar (int *p, int *q)
{
int i;
static int res[3]={0,0,0};
for(i=0;i<3;i++)
{
res[i]=p[i]-q[i];
}
return (res);

}
main()
{
int a[3]={1,2,3};
int b[3]={1,2,3};
int *res;
int i;
res=adar(a,b);
for(i=0;i<3;i++)
{
printf("%d ", res[i]);
}
}
