//WAP to print a prime number in range 
#include<stdio.h>
    int isprime (int n ){
        for(int i = 2 ; i <= n-1 ; i++){
            if(n % i == 0 ){
                return 0 ;
            }
        }
        return 1 ;
    }
    int main (){
        int n1 , n2 ;
        printf("enter first number");
        scanf("%d",&n1);
        printf("\nenter secound number ");
        scanf("%d",&n2);

        printf("the prime number between %d and %d are \n",n1 ,n2 );
        for(int i = n1 ; i <= n2 ; i++){
            if(isprime(i)){
                printf("%d ", i);
            }
        }
    
    return 0 ; 
}