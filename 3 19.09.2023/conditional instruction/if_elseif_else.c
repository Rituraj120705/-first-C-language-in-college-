#include<stdio.h>
int main() {
     int num;
    


     printf("enter your ratting 1-4\n");
     scanf("%d",&num);

     if(num==1){
        printf("your ratting is 1\n");
     }

     else if(num==2){
        printf("your ratting is 2\n");
     }

     else if(num==3){
        printf("your ratting is 3\n");

     }
     else if(num==4){
        printf("your ratting is 4");
     }

     else{
        printf("opps!,you have invalid ratting");
     }


    
     return 0;
}