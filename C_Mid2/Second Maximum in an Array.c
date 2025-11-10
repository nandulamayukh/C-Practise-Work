

#include<stdio.h>
main()
{
int a[100],index,max,n,i;
printf("enter the length of array");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
max=a[0];
index=0;
for(i=0;i<n;i++)
{
if(a[i]>max)
    {max=a[i];
    index=i;
    }
}
printf("\n max: %d  index: %d",max,index);
a[index]= -2147483648;
max=a[0];
index=0;
for(i=0;i<n;i++)
{
if(a[i]>max)
    {max=a[i];
    index=i;
    }
}
printf("\n second largest no: %d  index: %d",max,index);
}
