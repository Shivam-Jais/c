// write a program in c to sort element of array in ascending order ;
#include<stdio.h>
int main (){

int temp , a[5];
for(int i = 0 ; i<5 ; i++){
    printf("enter the element of a[%d]",i);
    scanf("%d",&a[i]);
}
for(int i = 0 ; i<5 ; i++){
    for(int j = i + 1 ; j < 5 ; j++){
        if(a[i] > a[j]){
            temp = a[i];
             a[i] = a[j ];
            a[j]= temp ;

        }
    }
}
printf("array element :  ");
for(int i = 0 ; i<5; i++){
    printf("%d  ",a[i]);
}
return 0 ;
}