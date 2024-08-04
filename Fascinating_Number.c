#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*
    When the number is multiplied with 2 and 3 and then original and these two answer are concatnated after that if it contains all the digits from 1 to 9. 
    Then it is known as Fascinating Number.
*/

void main(){
    int num;
    printf("Enter the number-");
    scanf("%d",&num);
    int twiceNum=2*num,thriceNum=3*num;
    long int checkNum=123456789;
    int len1=log10(twiceNum)+1,len2=log10(thriceNum)+1;
    long int orgNum=(num*(pow(10,len1))+twiceNum)*(pow(10,len2))+thriceNum;
    long int temp=orgNum,counter=0;
    while(checkNum>0){
        orgNum=temp;
        while(orgNum>0){
            if(orgNum%10==checkNum%10){
                counter++;
                break;
            }
            orgNum/=10;
        }
        checkNum/=10;
    }
    if(counter==9){
        printf("It is a Fascinating Number");
    }
    else{
        printf("It is not a Fascinating Number");
    }
}