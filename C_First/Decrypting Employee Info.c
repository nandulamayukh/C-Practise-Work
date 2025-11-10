#include<stdio.h>
struct employee
{
int empnum;
char empname[15];
float empsal;
};
main()
{
FILE *fp;
int i;
struct employee a;
fp=fopen("Employee Info.txt", "r");
rewind(fp);
while(!feof(fp))
    {
    fread(&a, sizeof(struct employee), 1, fp);
    printf("%d, %s, %f", a.empnum, a.empname, a.empsal);
    }

}
