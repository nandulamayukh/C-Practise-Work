#include<stdio.h>

int main()
{
    void swap(int *,int *);
    int a,b;
    printf("1st number : ");
    scanf("%d",&a);
    printf("2nd number : ");
    scanf("%d",&b);

    printf("Before swapping: a = %d, b = %d ",a,b);
    swap(&a,&b);
    printf("\n");
    printf("Swapped: a = %d, b = %d ",a,b);
    return 0;
}

void swap(int *p,int *q)
{

    int temp;
    temp = *p;
    *p=*q;
    *q=temp;
}
