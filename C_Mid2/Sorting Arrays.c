#include<stdio.h>
int syn(int *a, int n)
{
int index,min,i;
min=a[0];
index=0;
for(i=0;i<n;i++)
{
if(a[i]<min)
    {min=a[i];
    index=i;
    }
}
return (index);
}

main()
{
int a[100];
int d[100];
int i;
int n;
printf("enter array size");
scanf("%d", &n);
for(i=0;i<n;i++)
    {
    scanf("%d", &a[i]);
    }

for (i=0;i<n;i++)
    {
    d[i]=a[syn(a,n)];
    a[syn(a,n)]=2147483647;
    }

for (i=0;i<n;i++)
    {
    printf("%d ", d[i]);
    }
}
