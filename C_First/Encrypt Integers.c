#include<stdio.h>
main()
{
FILE *fp;
int i;
int j;
char c='m';
fp=fopen("Encrypt.txt", "w");
for(j=0;j<5;j++)
    {
    scanf("%d", &i);
    fwrite(&i, sizeof(i), 1, fp);
    }
fclose(fp);
}
