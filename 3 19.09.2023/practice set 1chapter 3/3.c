#include<stdio.h>
int main() {
  double tax=0;   
float income;
printf("Enter your income\n");
scanf("%f",&income);

if(income>=250000 && income<=500000){
     tax= income*0.05;
     //printf("the income tax is %f",tax);
}

else if(income>=500000 && income<=1000000){
     tax= income*0.20;
}

else if(income>=1000000){
     tax= income*0.30;
}

//  else {
//       tax=0;
// }

printf("you paid the incometax is %.1f",tax);

     return 0;
}