#include<stdio.h>
int main() {
    int n;
    printf("enter the value of n\n");
    scanf("%d",&n);
     for(int i=1;i<=20;i++){
        printf("the table is %d*%d=%d\n",i,n,i*n);
     }
    
     return 0;
}


// #include<stdio.h>
// int main() {
//     int n;
//     printf("enter a number\n");
//     scanf("%d",&n);

//     printf("multiplication table for %d\n",n);
//     for(int i=1;i<=10;i++){
//       printf("%d*%d=%d\n",n,i,n*i);
//     }
   
//     return 0;
// }