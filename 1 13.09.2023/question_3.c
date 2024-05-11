#include<stdio.h>
int main() {
    float celsius;
    float far;
     printf("enter the value of celsius\n");
     scanf("%f",&celsius);

    far= (celsius * 9/5) + 32;
    printf("the value of fahrenheit is %f",far);
     return 0;
}