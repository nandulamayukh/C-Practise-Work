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
hp=fopen("Print This.txt", "w");
while(!feof(fp))
{
fgets(ar,100, fp);
fputs(ar, hp);
j++;
}
fclose(fp);
fclose(hp);
}
