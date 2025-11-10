

#include<stdio.h>
int syn(int *a, int n)
{
int index,max,i;
max=a[0];
index=0;
for(i=0;i<n;i++)
{
if(a[i]>max)
    {max=a[i];
    index=i;
    }
}
return (index);
}
