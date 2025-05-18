//keep taking numvers as input from user until user gives odd number.
#include<stdio.h>
int main (){
    int n ; 
    do {                                  // yaha pe hum do while use kiya because ek baar input lelenge tabhi to condition laga kar check kar paynge.
        printf("enter number ");         //here there is no updation point.
        scanf("%d",&n);
        if(n %2 !=0){   // if(n %d == 0 ){break ; }
            break ; 
        }
    }while(1);
    printf("you enter the odd number %d ",n);
    return 0 ;
}