#include<stdio.h>
int main() {
     int i=1;
     int n;
     printf("enter the value of n\n");
     scanf("%d",&n);

     do{
        printf("the first natural number is %d\n",i);
        i++;
     }
     while(i<n);
    
     return 0;
}