#include<stdio.h>

int main()
{
  int ar[5];
  int i;
  int eve[5];
  int odd[5];
 printf("typr in the values of the array:");
 for(i=0; i<5;i++)
 {
      scanf("%d", &ar[i]);
 }

 for(i = 0; i < 5; i ++)
 {
 	if(ar[i]%2==0)
 	{
 		eve[i]=ar[i];

	}
	else
	{
		odd[i]=ar[i];

	}
 }


 printf("even numbers:");
for (i=0;i<5;i++)
{
    printf("%d   ", eve[i]);
}

 printf("odd numbers:");
 for (i=0;i<5;i++)
{
    printf("%d   ", odd[i]);
}

}
