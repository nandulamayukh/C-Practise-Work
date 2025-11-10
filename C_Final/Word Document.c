#include<stdio.h>
main()
{
FILE *fp;
char ar[100];
int sum=0;
int n=0;
float avg;
fp=fopen("b.xls", "w");
rewind(fp);
fputs("hello world", fp);
fputs("test sentence", fp);
fclose(fp);

}
