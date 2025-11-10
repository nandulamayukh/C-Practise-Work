#include<stdio.h>
struct employee
{
int empnum;
char empname[15];
float empsal;
};
main()
{
struct employee a[100];
int n;
int i;
char dec;
int echange;
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
printf("employee %d", i+1);
printf("%d", a[i].empnum );
puts(a[i].empname);
printf("%f", a[i].empsal);
}
printf("do you want to modify salary of any employee?");
scanf("%c", &dec);
if(dec=='y'||dec=='Y')
{
    printf("which employee would you like to modify?");
    scanf("%d", &echange);
    printf("modifying salary of employee %d", echange);
    scanf("%d", a[echange].empsal);
    for (i=0;i<n;i++)
    {
    printf("employee %d", i+1);
    printf("%d", a[i].empnum );
    puts(a[i].empname);
    printf("%f", a[i].empsal);
    }
}
else
    exit(0);
}
