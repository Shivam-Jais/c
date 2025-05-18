#include<stdio.h>
void main ()
{
 /*   int arr[4]={1,2,3,4};
    printf("\n%d",arr[1]);

   int marks[3];
   printf("\nenter the marks of math ");
   scanf("%d",&marks[0]);    
   
   printf("enter the marks of chem ");
   scanf("%d",&marks[1]);

   
   printf("enter the marks of eng ");
   scanf("%d",&marks[2]);

   printf("marks of math = %d , chem = %d , eng = %d",marks[0],marks[1],marks[2]);
*/
   printf("WAP to enter price of 3 item and print their final price \n");
   float prince[3];
   printf("enter price ");
//   scanf("%f%f%f",&prince[0],&prince[1],&prince[2]);
   for(int i = 0 ; i<3 ; i++){
      scanf("%f",&prince[i]);
   }
 /*scanf("%f",&prince[0]);
   scanf("%f",&prince[1]);
   scanf("%f",&prince[2]);*/ //we can write like this also
   for(int i = 0 ; i<3 ; i++){
      printf("%.2f\n",prince[i]);
   }

 /*  printf("\ntotal prince %f",prince[0]+(0.18*prince[0]));
   
   printf("\ntotal prince %f",prince[1]+(0.18*prince[1])) ;
   
   printf("\ntotal prince %f",prince[2]+(0.18*prince[2]));
*/
}