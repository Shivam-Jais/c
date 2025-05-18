// wap to check if a givem number is armstrong number or not
// armstrong number means the sum of cube of each digit of a given number is equal to number .
#include<stdio.h>
int main ()
{
    int num , rem , arm = 0 , n ;
    
    printf("enter a number");
    scanf("%d",&num);
    printf("the number is %d",num);

     n = num;

    while (num > 0 )
    {
        rem = num % 10 ;
        arm = (rem*rem*rem*rem) + arm ;
        num = num / 10 ;  
    }
    printf("\narm %d",arm);
    if (n == arm){
        printf("\nit is a armtrong number ");
    }
    else {
        printf("\nnot");
    }
    return 0 ;
}