#include<stdio.h>
int main() {
    int n;
     printf("enter a number\n");
     scanf("%d",&n);

     printf("multiplication table of %d in reverse order",n);

    for(int i=11;i;i--){
        printf("%d*%d=%d\n",n,i,n*i);
    }
     return 0;
}