#include<stdio.h>
int main()
{
    int n,i,a=0,b=1,nextnum;
    printf("enter number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d",a);
        nextnum=a+b;
        a=b;
        b=nextnum;
    }
    printf("\n");
    return 0;
}