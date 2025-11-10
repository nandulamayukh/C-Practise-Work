#include<stdio.h>
#include<math.h>
main()
{
int a;
int i;
int sum=0;
int avg;
i=1;
do
{
    printf("Type in Number %d  ",i);
    scanf("%d",&a);
    sum=sum+a;
    i=i+1;
}
while(i<=10);
printf("sum= %d",sum);
avg=sum/10;
printf("average=%d", avg);
}
