#include<stdio.h>
int main() {
    int a;

    printf("enter the value of a\n");
    scanf("%d",&a);
     
     for( a; a<10; a++){
        printf("the value of a is %d\n",a+2);
     }
    
     return 0;
}