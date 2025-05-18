#include<stdio.h>
void main (){
    int   n ;
    printf("enter the size of array");
    scanf("%d",&n);
    int arr[n];
    //  printf("the elements are"); 
    for(int i = 0 ;i<n; i++){
        printf("enter the element arr[%d]:",i);
         scanf("%d",&arr[i]);
    }
    for(int i = 0 ; i<n ; i++){ //for printing in reverse order (int i = n ; i>=0 ; i--)
        printf("%d \n",arr[i]);
    }
}