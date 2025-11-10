#include<stdio.h>
#include<math.h>
main()
{
int a;
int i;
int sum;
scanf("%d", &a);
i=1;
do
    {
        printf("%d ",i);
        sum=sum+(i);
        i=i+2;
    }
while (i<=a);
printf("Sum=%d ",sum);
}
