//given an array of marks of students if the mark of any student is less than 35 print its roll number.
//[roll number here refers to the index of the array ] mtlb index no hei roll no hai 
#include<stdio.h>
    int main () {
        int n ; 
        printf("enter the size of array ");
        scanf("%d",&n);
        int marks [n] ;
        for(int i = 0 ; i <= n ; i++ ){
            printf("the element of marks [%d]\n",i);
            scanf("%d",&marks[i]);
        }
        for(int i = 0 ; i<=n ; i++){
            if(marks[i] < 35 ){
            printf("%d,",marks[i]);
            }
        }
        return 0 ;
    }