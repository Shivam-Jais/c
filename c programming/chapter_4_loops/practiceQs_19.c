// print the numbers from 1 to 10 except for 3 and stop printinf after 6.
#include<stdio.h>
int main (){
    for(int i =1 ; i<= 10 ; i++){
        if(i == 3){
            continue;
        }
        if(i==7){
            break ;
        }
        printf("%d\n",i);
    }
    printf("\nend");
    return 0 ;
}