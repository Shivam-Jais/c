//sum of two number ;
#include<stdio.h>
void main ()
{
    int n ;
    printf("enter the size of array \n");
    scanf("%d",&n);

    int a[n],b[n],sum[n];
    for(int i = 0 ; i < n ; i++){
      printf("enter the element of a{%d}",i);
      scanf("%d",&a[i]);
    }
    printf("now enter the sec element\n");
      for(int i = 0 ; i< n ; i++){
        printf("the element of b[%d]\n",i);
        scanf("%d",&b[i]);
      }
      for(int i = 0 ; i< n ; i++)
      {
        sum[i] = a[i] + b[i];
        printf("\nsum = %d",sum[i]);
       /* printf("\nmultipilcation of two no = %d", a[i] * b[i]); 
        printf("\ndivide = %f", a[i] / b[i]);
        printf("\nsubtraction = %d", a[i] - b[i]);*/
      }

      for(int i = 0 ; i< n ; i++){
      printf("\nmultipilcation of two no = %d", a[i] * b[i]);
      }
}