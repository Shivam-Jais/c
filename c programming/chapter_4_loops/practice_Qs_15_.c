#include<stdio.h>
int main (){
      int i, n, sum = 0 ; 
    printf("enter the starting point : i = ");
    scanf("%d",&i);
    printf("enter the ending point  : n = ");
    scanf("%d",&n);
    for( i =1; i <= n ; i++){
        sum = sum + i ;
    }
    printf("sum is %d",sum);

    printf("\nthe next question print the reverse\n");
    for( i=n ; i>=1 ;i-- ){ // isko hum ek hei loop me likha sakte hai
        printf("%d\n",i);
    }
    return 0 ;
}