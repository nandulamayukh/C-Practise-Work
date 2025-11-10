#include <stdio.h>

void main()
{
    int ar1[3];
    int ar2[3];
    int i;



       printf("type in 3 elements for the array:");
       for(i=0;i<3;i++)
        {
	      printf("value %d : ",i);
	      scanf("%d",&ar1[i]);
	    }

    ar2[0]=ar1[0];
    ar2[1]=ar1[1];
    ar2[2]=ar1[2];


    printf("First array: ");
    for(i=0; i<3; i++)
    {
        printf("%d ", ar1[i]);
    }


    printf("Second array: ");
    for(i=0; i<3; i++)
    {
        printf("%d ", ar2[i]);
    }

}
