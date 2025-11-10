#include<stdio.h>
int r;
int c;
void addmat(int **a, int **b)
{
int res[100][100];
int i;
int j;
for (i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
    res[i][j]=a[i][j]+b[i][j];
    printf("%d ", res[i][j]);
    }
    printf("\n");
}
}

main()
{
int i;
int j;
int a[100][100];
int b[100][100];
printf("give number of rows and columns");
scanf("%d", &r);
scanf("%d", &c);
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
    scanf("%d", &a[i][j]);
    }
}
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
    scanf("%d", &b[i][j]);
    }
}
addmat(&a,&b);
}
