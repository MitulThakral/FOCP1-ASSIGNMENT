#include<stdio.h>
int main()
{
    float x,y;
    printf("enter coordinates of x and y");
    scanf("%f%f",&x,&y);
    if(x>0&&y>0)
    {
        printf("coordinate point lies in 1st quadrant\n");
    }
    else if(x<0&&y>0)
    {
        printf("coordinate point lies in 2nd quadrant\n");
    }
        else if(x<0&&y<0)
        {
        printf("coordinate point lies in 3rd quadrant\n");
        }
        else if(x>0&&y<0)
        {
             printf("coordinate point lies in 4th quadrant\n");
        }
        else if(x==0&&y==0)
        {
             printf("coordinate point lies at origin\n");
        }
        else if(y==0)
        {
            printf("coordinate point lies at x-axis\n");    
        }
        else
         printf("coordinate point lies at y-axis\n"); 
         return 0;
}