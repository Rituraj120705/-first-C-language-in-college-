#include<stdio.h>
int main() {
     int age;
     //int vippass=0;
    int vippass;

     printf("enter the age\n");
     scanf("%d",&age);

     printf("you have vippass or not,here yes for 1 and no for 0.\n");
     scanf("%d",&vippass);

     if((age>=18 && age<=70) || vippass==1){
        printf("you are above 18 and below 70.so you can drive");
     }
     else{
        printf("you cannot drive");
     }
    
     return 0;
}