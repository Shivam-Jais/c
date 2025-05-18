#include<stdio.h>
#include<math.h>
int main (){
    printf("%d",16 % 10 ); // modular always gives interger value
    
    printf("\n%f",2.0*2); 

// type conversion 
int a =(int) 1.99999 ;
printf("\na = %d",a);

//operator preceding 
int x = 2;
int y = 5;
int exp1 = (x*y/x);
int exp2 = (x*(y/x));
printf("\nexp1 = %d\nexp2 = %d",exp1 ,exp2);

// practice qes4 
int n = 4 * 3 / 6 * 2 ; // associativity rule use left to right calculation 
int m = 5 * 2 - 2 * 3 ;
int h = 5 * (2 /2 ) * 3 ;
int g = 5 + 2 / 2 * 3 ; // 4 + ((2 /2 ) * 3) + 5 + 3 = 8 
printf("\n%d",n);
printf("\n%d",m);
printf("\n%d",h);
printf("\n%d",g);
//control instruction 
// operators 
// arithematic operator = + , - , / , * , % 
printf("\ngreter than %d ",4 > 3 );// reation operator 
printf("\n%d",(4<5)&&(2<5)); 
printf("\n%d", (2>3) || (3>2));
printf("\n%d",!(3 >2));
printf("\n%d",!((5>1) && (3>4)));
//assigment operator 

    return 0 ;
}