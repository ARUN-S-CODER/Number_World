#include<stdio.h>
#include<stdlib.h>

/*
    When the sum of the factors of the given number excluding that number is equal to that number, then it is known as Perfect Number.
*/

void main(){
    int num,sum=0; 
    printf("Enter the number-");
    scanf("%d",&num);
    for(int iter=1;iter<num;iter++){
        if(num%iter==0){
            sum+=iter;
        }
    }
    if(sum==num){
        printf("It is a Perfect Number");
    }
    else{
        printf("It is not a Perfect Number");
    }
}