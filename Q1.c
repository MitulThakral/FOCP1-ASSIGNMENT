#include<stdio.h>
#include<math.h>
int main()
{
    int num,originalnum,remainder;
    int n=0;
    double result=0;
    originalnum=num;
    printf("enter number");
    scanf("%d",&num);
    originalnum=num;
    while(originalnum!=0)
    {
        originalnum/=10;
        n++;
    }
    originalnum=num;
    while(originalnum!=0)
    {
        remainder=originalnum%10;
        result+=pow(remainder,n);
        originalnum/=10;
    }
    if((int)result==num)
    printf("%d is amstrong number",num);
    else
    printf("%d is not amstrong number",num);
    return 0;
}