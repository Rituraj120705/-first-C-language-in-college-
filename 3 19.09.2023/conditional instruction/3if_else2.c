#include<stdio.h>
int main() {
    int a,age;
     
     printf("enter the number\n");
     scanf("%d",&age);

     if(age!=90){
        printf("you re above 90 so you can drive");
     }
    else{
        printf("you cannot drive");
    }
     return 0;
}