//WAP to print prime number in a range ;
#include<stdio.h>
int main (){
    int n1 , n2 ;
    printf("enter two no");
    scanf("%d%d",&n1,&n2);
    for(int i = n1 ; i <= n2 -1 ; i++)
    {
        for(int j = 2 ; j<=i ; j++)
        {
            if(i % j == 0){
                break;
            }
            if(i==j){
            printf("%d\n",j);}
        }
    }
}