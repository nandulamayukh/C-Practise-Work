#include<stdio.h>
struct employee
{
int empnum;
/*fseek(fp,0,SEEK_SET)*/
/*ftell(fp)*/
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
    {
    fseek(fp,0,SEEK_END);
    printf("%d, %s, %f", a.empnum, a.empname, a.empsal);
    }
}
