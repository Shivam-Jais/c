//wap to print the sum of 
#include<stdio.h>
void main ()
{
    int n ; 
    printf("enter the size of array ");
    scanf("%d",&n);
    int arr[n],sum = 0 ; 
    for(int i = 0 ; i< n; i++){
        printf("enter the element of arr[%d]",i);
        scanf("%d",&arr[i]);
          sum = sum + arr[i];
    }for(int i = 0 ; i< n ; i++){
        printf("%d\n",arr[i]);
    }
    printf("sum of = %d\n",sum);
}