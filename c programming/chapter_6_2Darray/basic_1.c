#include<stdio.h>
void main (){
    int r , c ;
    printf("enter the size of row and column ");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i = 0 ; i<r ; i++){
        for(int j = 0 ; j< c ; j++){
            printf("\nenter the element of arr[%d][%d]",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
      for(int i = 0 ; i<r ; i++){
        for(int j = 0 ; j< c ; j++){
    
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
}