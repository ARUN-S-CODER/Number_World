#include<stdio.h>
#include<stdlib.h>

/*
    When the sum of the cube of the each digits in that number returns the same number then it is known as Armstrong Number.
*/

void main(){
    int num,sum=0;
    printf("Enter the number-");
    scanf("%d",&num);
    int temp=num;
    while(num>0){
        sum+=(num%10)*(num%10)*(num%10);
        num/=10;
    }
    if(sum==temp){
        printf("It is an Armstrong Number");
    }else{
        printf("It is not an Armstrong Number");
    }

}