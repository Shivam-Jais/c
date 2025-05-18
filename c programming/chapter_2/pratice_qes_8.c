/*print1(true) or (false) for following statement :
a if it's sunday's it's snowing - > true */
#include<stdio.h>
int main (){
    int issunday = 1 ;
    int issnowing = 1 ; 
    printf("%d",issunday && issnowing);
    
// b if it's monday or it's raining -> true 
int monday = 0  ;
int raining = 1 ;
printf("\n%d", monday || raining );
  
  //if a number is greater than 9 & less than 100 - > true ,or print the 2 digit no  
  int n; 
  printf("\nenter a number ");
  scanf("%d",&n);
  printf("%d",n>9 && n < 100 );//0 degga mtlb false and 1 dega to mtlb true
    return 0;
}