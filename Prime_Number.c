#include<stdio.h>
#include<stdlib.h>

/*
    When the number is only divisible by itself and one(1) then it is known as Prime Numbers.
*/

void main(){
    int num,isTerminated=0;
    printf("Enter the number-");
    scanf("%d",&num);
    for(int iter=2;iter<num;iter++){
        if(num%iter==0){
            printf("It is not a Prime Number");
            isTerminated=1;
            break;
        }
    }
    if(isTerminated==0){
        printf("It is a Prime Number");
    }
}