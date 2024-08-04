#include<stdio.h>
#include<stdlib.h>

/*
    When a number is greater than the sum of its factors excluding that number then it is known as Deficit Number.
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
    if(num>sum){
        printf("It is a Deficit_Number");
    }else{
        printf("It is not a Deficit_Number");
    }
}