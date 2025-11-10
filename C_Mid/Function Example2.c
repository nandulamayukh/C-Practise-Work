#include<stdio.h>
int main()
{
int choice;
float a;
float b;
float res;
void display();
float add(float a, float b);
float sub(float a, float b);
float prd(float a, float b);
float div(float a, float b);
char ch='y';
while(ch!='n'||ch!='N')
{
printf("choose any two numbers");
scanf("%f %f",&a ,&b);
display();
scanf("%d",&choice);
switch(choice)
{
    case 1: res=add(a,b);
    printf("%f",res);
    break;
    case 2: res=sub(a,b);
    printf("%f",res);
    break;
    case 3: res=prd(a,b);
    printf("%f",res);
    break;
    case 4:
    if(b==0)
    {printf("b cannot be 0");}
    else
    { res=div(a,b);
        printf("%f",res);
    }

}
    printf("do you want to continue y/n\n");
    scanf("%c", &ch);
}
}
void display()
{
    printf("Choose 1 for addition\n 2 for subtraction\n 3 for multiplication\n 4 for division");
}
float add(float a, float b)
{
    float res;
    res=a+b;
    return(res);
}
float sub(float a, float b)
{
    float res;
    res=a-b;
    return(res);
}
float prd(float a, float b)
{
    float res;
    res=a*b;
    return(res);
}
float div(float a, float b)
{
    float res;
    res=a/b;
    return(res);
}

