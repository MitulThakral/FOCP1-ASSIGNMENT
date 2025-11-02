#include<stdio.h>
int main(){
       int number;
   printf("\nEnter the size of Array:");
   scanf("%d",&number);
    int arr[number];
    printf("\nEnter the Numbers in array:");
    for(int i = 0;i<number;i++){
        scanf("%d",&arr[i]);
    }
    int peak = -1;
    for(int i = 0;i<number;i++){
        if((i==0 || arr[i]>=arr[i-1]) && (i==number-1 || arr[i]>=arr[i+1])){
            peak = i;
            break;
        }
    }
    if(peak!= -1){
        printf("peak element is: %d at index: %d",arr[peak],peak);
    }else{
        printf("No peak  element found");
    }
    return 0;
}