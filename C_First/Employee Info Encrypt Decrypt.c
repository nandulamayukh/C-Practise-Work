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
FILE *hp;
int i;
int j;
int n;
char b[100];
struct employee a[100];
fp=fopen("Employee Info.txt", "w");
printf ("type in number of employees: ");
scanf ("%d", &n);
for (i=0;i<n;i++)
{
printf("employee %d\n", i+1);
scanf("%d", &a[i].empnum);
fflush(stdin);
gets(a[i].empname);
fflush(stdin);
scanf("%f", &a[i].empsal);
}
for (i=0;i<n;i++)
{
fprintf(fp,"employee %d\n", i+1);
fprintf(fp,"%d\n", a[i].empnum );
fputs(a[i].empname, fp);
fprintf(fp,"\n");
fprintf(fp,"%f\n", a[i].empsal);
fwrite(&a[i] , sizeof(i), 1, fp);
}
}
