//additions of two matrices 
#include<stdio.h>
int main (){
    int arr[3][3]; 
    int arr1[3][3];
    int sum[3][3];
    printf("enter the element of a array \n");
    for(int i = 0 ; i<3 ; i++){
        for(int j = 0 ; j< 3 ; j++ ){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("enter the element of b array \n");
    for(int i = 0 ; i<3 ; i++){
        for(int j = 0 ; j< 3 ; j++ ){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("the sum of two matrices are : \n");
    for(int i =0 ; i<3 ; i++ ){
        for(int j = 0 ; j < 3; j++ ) {
            sum[i][j] = arr[i][j] + arr1[i][j];
            printf("%d  ",sum[i][j]);
        }
        printf("\n");
    }
    return 0 ;
}