#include<stdio.h>
int main (){
    int eng , math , phy, chem, his, total_marks, per;
    printf("enter the subject marks ");
    scanf("%d%d%d%d%d",&eng,&math,&phy,&chem,&his);
    total_marks = eng + math + phy + chem + his ;
    printf("total marks = %d",total_marks);
    per = total_marks / 5 ;
    printf("\npercentage = %d",per);
    if (per < 30 ){
        printf("\ngrade C ");
    }else if(30<= per && per <70 ){
        printf("\ngrade B");
    }else if (70<= per && per <90){
        printf("\ngrade A");
    }else {
       printf("\ngrade A++");
    }
    return 0 ;
}