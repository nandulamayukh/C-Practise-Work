#include<stdio.h>
main()
{
FILE *fp;
int i;
int j;
char c='m';
char ar[100];
fp=fopen("Encrypt.txt", "r");
for(j=0;j<5;j++)
    {
    fread(&i, sizeof(i), 1, fp);
    printf("%d ", i);
    }
fclose(fp);
}
