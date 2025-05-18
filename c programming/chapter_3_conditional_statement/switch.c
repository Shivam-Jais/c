#include<stdio.h>
int main (){
   int day ; 
    printf("enter a day (1-7)");
    scanf("%d",&day);
    switch(day){
    case 1 : printf("monday %d", day );
               break;
    case 2 : printf("tuesday %d",day);
               break ;
     case 3 : printf("wednesday %d",day);
                break ;
     case 4 : printf("thusday %d",day);
                break ;
     case 5 : printf("friday %d",day);
                 break ;
     case 6 : printf("saturday %d", day ) ;
                break ;
     case 7 : printf("sunday %d ",day);
                   break ;
     default: printf("enter a valid day between 1 to 7 ");
                             break ;

    }
    char dayy ; 
    printf("\nenter a day (char)");
    scanf("%c",&dayy);
    switch (dayy) {
    case 'm': printf("monday ");
               break;
    case 't': printf("tuesday ");
               break ;
     case 'w' : printf("wednesday ");
                break ;
     case 'h' : printf("thusday ");
                break ;
     case 'f' : printf("friday ");
                 break ;
     case 'r' : printf("saturday ");
                break ;
     case 's' : printf("sunday");
                   break ; 
     default: printf("enter a valid day between ");
                             break ;

}
 return 0 ; 
}