#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*
    When the sum of the factors of the given number minus 2 times of length of the digits in the sum is equal to the twice times of the original number.
    Then it is known as admirable number.
*/

void main(){
    int num,sum=0;
    printf("Enter the number-");
    scanf("%d",&num);
    for(int iter=1;iter<=num;iter++){
        if(num%iter==0){
            sum+=iter;
        }
    }
    int sqNum=2*num;
    int noOfDigits=2*(log10(num)+1);
    if(sqNum==sum-noOfDigits){
        printf("It is an Admirable Number");
    }else{
        printf("It is not an Admirable Number");
    }
}