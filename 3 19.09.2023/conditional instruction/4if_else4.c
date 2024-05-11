#include<stdio.h>
int main() {
     int age;
     printf("enter the value\n");
     scanf("%d",&age);

     if(age>=18 && age<=70 ){
        printf("you can drive");

     }
        else{
            printf("you cannot drive");

        }
        if(age==50){
            printf("\thalf century");
        }



    
     return 0;
}