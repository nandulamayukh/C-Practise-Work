#include<stdio.h>
main()
{
int a[100],index,min,n,i;
printf("enter the length of array");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
min=a[0];
index=0;
for(i=0;i<n;i++)
{
if(a[i]<min)
    {min=a[i];
    index=i;
    }
}
printf("\n min: %d  index: %d",min,index);
a[index]=2147483647;
min=a[0];
index=0;
for(i=0;i<n;i++)
{
if(a[i]<min)
    {min=a[i];
    index=i;
    }
}
printf("\n second smallest \ no: %d  index: %d",min,index);
}
