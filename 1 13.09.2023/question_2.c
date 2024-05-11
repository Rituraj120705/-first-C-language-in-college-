#include<stdio.h>
int main() {
     float pi=3.14;
     int radius;
     //int height;
     float area;
     printf("enter the radius of circle\n");
     scanf("%d",&radius);
    area=pi*radius*radius;
     printf("the area of circle is %.2f\n",area);

    
    int height;
    printf("enter the height of cylinder\n");
     scanf("%d",&height);
    float volume=pi*radius*radius*height;
     printf("the volume of cylinder is %.2f",volume);


    
     return 0;
}