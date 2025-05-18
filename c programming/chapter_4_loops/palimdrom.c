#include<stdio.h>
int main (){
    int n , r,c ,sum=0 ;
     printf("enter a number");
     scanf("%d",&n);
     c = n;
    while(n != 0){
        r = n%10 ;
        sum = (sum * 10) + r ;
        n = n/10 ;

    }if(c == sum){
    printf("it is a palindrome number :%d",sum);
        }else{
            printf("not");
        }
    return 0;
}