#include<stdio.h>
#include<stdlib.h>

/*
    When the sum of the product of the numbers from 1 to given number will return the factorial number of the given number.
    for example, num=5 then factorial number=120(5*4*3*2*1)
*/

void main(){
    int num;
    printf("Enter the number-");
    scanf("%d",&num);
    int factNum=1;
    for(int iter=1;iter<=num;iter++){
        factNum*=iter;
    }
    printf("The Factorial Number of %d is %d",num,factNum);
}