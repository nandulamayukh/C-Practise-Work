#include<stdio.h>
main()
{
  int a[10],min,i;
  printf("enter 10 numbers into array\n");
  for(i=0;i<10;i++)
  {
        printf("%d :",i);
        scanf("%d",&a[i]);
  }
  min=a[0];
  for(i=1;i<10;i++)
  {
      if(a[i]<min)
        min=a[i];
  }

  printf("%d",min);
}
