#include<stdio.h>
main()
{
FILE *fp;
FILE *hp;
char ar[100];
int sum=0;
int n=0;
float avg;
int i=0;
int j=0;
fp=fopen("Copy This.txt", "r");
while(!feof(fp))
{
fgets(ar,100, fp);
j++;
}
for(i=0;i<j;i++)
{
printf("%c", ar[i]);
}
hp=fopen("Print This.txt", "w");
for(i=0;i<j;i++)
fputs(hp, ar);
fclose(fp);
}
