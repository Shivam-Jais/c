#include<stdio.h>
int main (){
    char ch ;
    printf("enter a character ");
    scanf("%c",&ch);  //scanf("%d",&ch);  it convert the characte into int .
    printf("\nthe character is = %c \n & its integer value is  %d",ch,ch);
    if(ch >= 'A' && ch <= 'Z'){
        printf("\nupper case & its value in integer is %d",ch);
    }else if (ch >= 'a' && ch <= 'z'){
        printf("\nlower case and its \n value in integer is %d",ch);
    }else{
        printf("\nenter a valid character");
    }
    return 0 ;
}