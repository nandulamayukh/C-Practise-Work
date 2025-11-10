#include<stdio.h>
main()
{
 static int a[2][2];
 static int b[2][2];
 static int c[2][2]={{0,0},{0,0}};
int i;/*rows*/
int j;/*columns*/
int k;/*columns*/
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
    scanf("%d", &a[i][j]);
    }
}
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
    scanf("%d", &b[i][j]);
    }
}
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        for(k=0;k<2;k++)
        {
        c[i][j]=a[i][k]*b[k][j]+c[i][j];
        }
    }
}
printf("a:\n");
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
    printf("%d", a[i][j]);
    }
    printf("\n");
}
printf("b:\n");
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
    printf("%d", b[i][j]);
    }
    printf("\n");
}
printf("a*b:\n");
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
    printf("%d ", c[i][j]);
    }
    printf("\n");
}
}
