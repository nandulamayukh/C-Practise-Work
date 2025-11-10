#include <stdio.h>
main()
{
int i;
int j;
for(i=1;i<11;i++)
{
    printf("table %d\n",i);
for(j=1;j<11;j++)
printf("%d*%d=%d\n",i,j,i*j);
}
}
