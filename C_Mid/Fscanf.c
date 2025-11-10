#include<stdio.h>
main()
{
FILE *fp;
char ar[100];
int sum=0;
int n=0;
int a;
int t=0;
float avg;
fp=fopen("a.txt","r");
rewind(fp);
while (fscanf(fp,"%d",&a)!=-1)
{
printf("%d\n", a);
sum=sum+a;
n++;
}
avg=(float)sum/n;
printf("%f", avg);
fclose(fp);
}
