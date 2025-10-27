#include<stdio.h>
int main()
{
    int x,y,i,hcf;
    printf("enter two numbers");
    scanf("%d%d",&x,&y);
    for(i=1;i<=x && i<<y;i++)
    {
    if(x%i==0&&y%i==0)
    hcf=i;
    }
    printf("HCF OF %d AND %d is %d",x,y,hcf);
    return 0;   
}