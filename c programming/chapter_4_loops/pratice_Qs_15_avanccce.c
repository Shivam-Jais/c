#include<stdio.h>
int main () {
    int n ; 
    printf("enter the value of n ");
    scanf("%d",&n);
   /* int sum = 0 ;
    for(int i = 1 , j=n ; i<=n && j>=1 ; i++ , j--){ // in for loop we cannot print i out of the block {  }
        sum = sum + i ;
            printf("\n%d",j);
    }
      printf("\nsum is %d",sum );*/
       int sum1 = 0 ;
      for ( int i =n ; i>=1;  i--){
         sum1 = sum1 + i ; // yaha pe sum1 islya liya pichale wale sum me add kar deta tha because its a global variable 
         printf("\n%d",i);

      }

      printf("\nthe sum is %d",sum1);
      return 0 ;
}