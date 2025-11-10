#include<stdio.h>
#include<math.h>
main()
{
int a;
int i;
int t2;
int t4;
scanf("%d", &a);
if(a<3)
{
    for(i=0;i<=10;i=i+1)
    {
    t2=2*i;
    printf("%d\n", t2);
    }
}
else
{
for(i=0;i<=10;i=i+1)
{
t4=4*i;
printf("%d\n", t4);
}
}
}

