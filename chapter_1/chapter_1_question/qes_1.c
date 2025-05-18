//calculate the perimeter of rectangle = 2 * length + width .
#include<stdio.h>
int main (){
    int a, b, p;
    printf("enter the value of a & b");
    scanf("%d%d",&a,&b);
    p = 2 *(a + b );
    printf("the perimeter of rectangle = %d",p);
    return 0 ;
}
//direct without 3Rd variable we can write 
// printf("the perimeter of rectangle = %d",2 * (a + b));