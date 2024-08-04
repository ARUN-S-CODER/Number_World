#include<stdio.h>
#include<stdlib.h>

/*
    When the sum of the digits and product of the digits in number are equal then it is known as spy number.
*/

void main(){
    int num;
    printf("Enter the number-");
    scanf("%d",&num);
    int temp=num;
    int sum=0,product=1;
    while(num>0){
        sum+=(num%10);
        num/=10;
    }
    while(temp>0){
        product*=(temp%10);
        temp/=10;
    }
    if(sum==product){
        printf("It is a SPY Number");
    }
    else{
        printf("It is not a SPY Number");
    }
}