//write a program to point the average of 3 numbers.

#include<stdio.h>
int main ()
{
    int a , b , c ; 
    printf("enter the values of 3 number ");
    scanf("%d%d%d",&a,&b,&c);
    
    printf("the average of 3 number = %d", (a + b + c ) /3 ); 
    return 0 ;// it can be possible with using 3rd variable 
}