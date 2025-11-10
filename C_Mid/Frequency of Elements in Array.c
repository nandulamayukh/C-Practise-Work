#include<stdio.h>
int n;
main()
{
int a[100];
int b[100];

int i;
int j;
printf("enter array size");
scanf("%d", &n);
for(i=0;i<n;i++)
    {
    scanf("%d", &a[i]);
    b[i]=0;
    }
for (i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
        {
        if(a[i]==a[j]&&(com(a,a[j])==0))
        b[i]++;
        }
printf("%d:%d\n",a[i], b[i]);
    }
}
int com(int *a, int x)
{
    int i;
for (i=0;i<n;i++)
    {
    if (a[i]==x)
    return (0);
    else
    return(1);
    }
}
