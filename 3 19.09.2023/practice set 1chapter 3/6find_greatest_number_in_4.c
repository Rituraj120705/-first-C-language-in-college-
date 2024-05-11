#include<stdio.h>
int main() {
     float num1,num2,num3,num4;

     printf("enter the numbers\n");
     scanf("%f%f%f%f",&num1,&num2,&num3,&num4);
    
    if(num1>=num2 && num1>=num3 && num1>=num4){
        printf("the greatest number is %f",num1);
    }

    else if(num2>=num1 && num2>=num3 && num2>=num4){
        printf("the greatest number is %f",num2);
    }
    else if(num3>=num1 && num3>=num2 && num3>=num4){
        printf("the greatest number is %f",num3);
    }

    else if(num4>=num1 && num4>=num2 && num4>=num3){
        printf("the greatest number is %f",num2);
    }
     return 0;
}