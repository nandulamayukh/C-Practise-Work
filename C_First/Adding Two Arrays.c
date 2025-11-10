#include<stdio.h>
main()
{
int ar1[5];
int ar2[5];
int res[5];
int i;
int j;
int z;

for(i=0;i<=4;i++)
{
printf("element %d of ar1 ",i);
scanf("%d", &ar1[i]);

}
for(j=0;j<=4;j++)
{
printf("element %d of ar2 ",j);
scanf("%d", &ar2[j]);
}
for(z=0;z<=4;z++)
{
res[z]=ar1[z]+ar2[z];
printf("%d",res[z]);
}
}

