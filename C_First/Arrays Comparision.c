#include<stdio.h>
main()
{
int ar1[5];
int ar2[5];
int res[5];
int i;
int j;
int z;

for(i=0;i<5;i++)
{
printf("element %d of ar1 ",i);
scanf("%d", &ar1[i]);

}
for(j=0;j<5;j++)
{
printf("element %d of ar2 ",j);
scanf("%d", &ar2[j]);
}


for(i=0;i<5;i++)
{
if(ar1[i]!=ar2[i])
{printf("arrays are not equal");
exit(0);}
}
printf("arrays are equal");
}
