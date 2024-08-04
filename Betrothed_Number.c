#include<stdio.h>
#include<stdlib.h>

/*
    There will be two numbers as a input.
    If the sum of the factors of the first number excluding that number is equal to second number plus one and 
    Similarly the sum of the factors of the second number excluding that number is equal to first number plus one.
    Then it is known as Betrothed Number.
*/

void main(){
    int num1,num2,sum1,sum2;
    printf("Enter the First Number-");
    scanf("%d",&num1);
    printf("Enter the Second Number-");
    scanf("%d",&num2);
    for(int iter1=1;iter1<num1;iter1++){
        if(num1%iter1==0){
            sum1+=iter1;
        }
    }
    for(int iter2=1;iter2<num2;iter2++){
        if(num2%iter2==0){
            sum2+=iter2;
        }
    }
    if(num1+1==sum2 && sum1==num2+1){
        printf("It is a Betrothed Number");
    }else{
        printf("It is not a Betrothed Number");
    }
}