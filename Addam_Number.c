#include<stdio.h>
#include<stdlib.h>

/*
    When the square of the number is equal to the reverse of the square of the reverse of that number then it is known as Addam Number.
*/

void main(){
    int num,revNum=0,sqRevNum,revSqRevNum=0;
    printf("Enter the number-");
    scanf("%d",&num);
    int sqNum=num*num;
    while(num>0){
        revNum=(revNum*10)+(num%10);
        num/=10;
    }
    sqRevNum=revNum*revNum;
    while(sqRevNum>0){
        revSqRevNum=(revSqRevNum*10)+(sqRevNum%10);
        sqRevNum/=10;
    }
    if(revSqRevNum==sqNum){
        printf("It is an Addam Number");
    }else{
        printf("It is not an Addam Number");
    }
}