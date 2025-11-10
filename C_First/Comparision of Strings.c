#include<stdio.h>
#include<string.h>
main()
{
char c[100];
char d[100];
int n;
int i;
int m=0;
gets(c);
puts(c);
fflush(stdin);
gets(d);
strcmp(c,d);
if(strcmp(c,d)==0)
printf("equal");
else
printf("not equal");
}
