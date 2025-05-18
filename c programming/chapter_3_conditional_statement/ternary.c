#include<stdio.h>
int main (){
    int age ;
    printf("enter age");
    scanf("%d",&age);
    age >=18 ? printf("adult %d",age) : printf(" not adult %d ",age);
    return 0 ;
    
}