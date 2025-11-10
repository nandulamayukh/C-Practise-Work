#include<stdio.h>
main()
{
FILE *fp;
char ar[100];
int sum=0;
int n=0;
float avg;
fp=fopen("a.txt", "r");
while (!feof(fp))
{
fgets(ar,100,fp);
sum=sum+atoi(ar);
n++;
}
avg=(float)sum/n;
printf("%f", avg);
fclose(fp);

}
