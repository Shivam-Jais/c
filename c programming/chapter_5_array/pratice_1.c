#include<stdio.h>
void main (){
    int sub[50],i;
    for(i = 0 ; i<=48 ; i++){
        sub[i] = i ;
        printf("%d\n",sub[i]);
    }
}


/*void main (){// grabage value will be printed 
    int arr[4];
    printf("%d",arr[0]);

    int x ;// it is also another example of garbage value
    printf("%d",x);
}*/