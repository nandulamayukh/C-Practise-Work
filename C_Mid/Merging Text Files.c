#include<stdio.h>
main()
{
FILE *fp;
FILE *hp;
FILE *jp;
char f[100];
fp=fopen("Print This1.txt", "r");
hp=fopen("Copy This.txt", "r");
jp=fopen("Merge Into.txt", "w");
while(!feof(fp))
    {
    fgets(f,100,fp);
    fputs(f,jp);
    }
while(!feof(hp))
    {
    fgets(f,100,hp);
    fputs(f,jp);
    }

}
