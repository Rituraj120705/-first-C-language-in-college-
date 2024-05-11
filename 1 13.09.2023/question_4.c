#include<stdio.h>
int main() {
     float time=1.5,rate=19,  principle=5000;
     float simpleinterest;
      
      simpleinterest=(principle*rate*time)/100;
      // here rate is in '%' and time is in 'year'.
      // i am also use scanf to input from user.
     printf("the value of simple interest is %.2f",simpleinterest);
     return 0;
}