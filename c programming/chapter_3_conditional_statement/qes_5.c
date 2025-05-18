#include<stdio.h>
void main (){
    char operator ;
    int a , b ;
    printf("enter the operator");
    scanf("%c",&operator);
    printf("enter two no ");
    scanf("%d%d",&a,&b);
    switch (operator)
    {
    case '+':printf("%d",a + b );
        break;
    case '-': printf("%d",a - b);
         break;
    default: printf("wrong no");
        break;
    }
}