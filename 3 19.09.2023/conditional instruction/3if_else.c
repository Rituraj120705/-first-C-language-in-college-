#include<stdio.h>
int main() {
     int a;

     printf("enter the number\n");
     scanf("%d",&a);


     if(a>=18){
        printf("you are abobe 18.so,you can drive");

     }
     else{
        printf("you are below 18 you cannot drive");
     }
    
     return 0;
}