#include<stdio.h>
int main(){
    int x,y,subtraction;
    printf("enter two numbers:");
    scanf("%d%d",&x,&y);
    subtraction = x + (~y+1);
    // if b = 4 than ,
    // internally it is stored like 00000100 and the first 0 it tells us that 
    //the number is +ve or -ve for 0 it is +ve for 1 it is -ve
    printf("Subtract of %d and %d is: %d",x,y,subtraction);
    return 0;
}