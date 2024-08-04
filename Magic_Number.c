#include<stdio.h>
#include<stdlib.h>

/*
    When the sum of the number is multiplied with the reverse of the sum of the number is equal to the Magic_Number.
*/

void main(){
    int num,sum=0,revSumNum=0;
    printf("Enter the number-");
    scanf("%d",&num);
    int temp=num;
    while(num>0){
        sum+=(num%10);
        num/=10;
    }
    int tempSum=sum;
    while(sum>0){
        revSumNum=(revSumNum*10)+(sum%10);
        sum/=10;
    }
    if(temp==(revSumNum*tempSum)){
        printf("It is a Magic Number");
    }else{
        printf("It is not a Magic Number");
    }
}