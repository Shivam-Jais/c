#include<stdio.h>
int main (){
    int age ,agee; 
    printf("enter age ");
    scanf("%d",&age);
    if (age > 18 )
    {
    printf("u can vote = %d",age );
    }else{
        printf("can't vote = %d",age);
    }
        printf("\nthank you");
        
           printf("\nagain enter another agee ");
           scanf("%d",&agee);
    if (agee >= 18 ) {
    printf("u can vote = %d",agee );
     }
    else if (agee >13 && agee < 18){
        printf("teenager = %d",agee);
    } 
    
    else{
        printf("child %d",agee);
    }
        return 0;
    
    
}