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
struct employee *p;
int n;
int i;
char dec;
int echange;
printf ("type in number of employees: ");
scanf ("%d", &n);
for (i=0;i<n;i++)
{
p=&a[i];
printf("employee %d\n", i+1);
scanf("%d", &p->empnum);
fflush(stdin);
gets(p->empname);
fflush(stdin);
scanf("%f", &p->empsal);
}
for (i=0;i<n;i++)
{
p=&a[i];
printf("employee %d\n", i+1);
printf("%d\n", p->empnum );
puts(p->empname);
printf("%f\n", p->empsal);
}
fflush(stdin);
printf("do you want to modify salary of any employee?\n");
scanf("%c", &dec);
while(dec=='Y'||dec=='y')
{
    printf("which employee would you like to modify?\n");
    scanf("%d", &echange);
    printf("modifying salary of employee %d\n", echange);
    p=&a[echange-1];
    scanf("%f", &p->empsal);
    for (i=0;i<n;i++)
    {
    printf("employee %d\n", i+1);
    printf("%d\n", p->empnum );
    puts(a[i].empname);
    printf("%f\n", p->empsal);
    printf("do you want to modify salary of any employee?\n");
    fflush(stdin);
    scanf("%c", &dec);
    }
}
}
