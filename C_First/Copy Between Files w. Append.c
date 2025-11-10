#include <stdio.h>
main()
{
FILE *fp;
FILE *hp;
int n[100];
int i;
fp=fopen("Copy This.txt", "r");
hp=fopen("Print This1.txt", "a");
while(!feof(fp))
{
fgets(n,100,fp);
printf("%c", n);
fputs(n,hp);
}
}
