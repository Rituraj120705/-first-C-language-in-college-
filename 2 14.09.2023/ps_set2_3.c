#include<stdio.h>
int main() {
    int a;
    printf("enter the value of a\n");
    scanf("%d",&a);
     //a%97==0;
     //when a is divided by 97 than return 1 and when not divisible than return 0.
    printf("divisibility test returns %d",a%97==0);
     return 0;
}