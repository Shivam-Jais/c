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
}