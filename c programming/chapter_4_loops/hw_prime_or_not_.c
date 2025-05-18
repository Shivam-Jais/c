//WAP to check given number is prime or not .
#include<stdio.h>
int main(){
    int n ;
    printf("enter a number ");
    scanf("%d",&n);
    if(n==2){
    printf("\nit is a prime number ");
    }else {     
        for(int i = 2 ; i <= n-1 ; i++ ){
            if(n % i == 0 ){
                printf("\nit not a prime no ");
                          break ;
             }
            else{
                   printf("\nit is a prime no");
                         break ;
            }
        }   
    }
}
      
