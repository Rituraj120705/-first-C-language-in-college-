#include<stdio.h>
int main() {
     int length,breadth;
     printf("enter the length of rectangle\n");
     scanf("%d",&length);
     printf("enter the breadth of rectangle\n");
     scanf("%d",&breadth);
    
    int area=length*breadth;
    printf("the area of rectangle if %dsquare centimeter",area);
     return 0;
}