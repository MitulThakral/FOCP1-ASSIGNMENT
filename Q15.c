#include<stdio.h>
int main(){
       int nou,i;
   printf("\nEnter the size of Array:");
   scanf("%d",&nou);
    int arr[nou];
    printf("\nEnter the Numbers in array:");
    for( i = 0;i<nou;i++){
        scanf("%d",&arr[i]);
    }
    int last = arr[nou-1];
    for(i = nou-1;i>=0;i--){
       arr[i] = arr[i-1];
    }
    arr[0] = last;
    printf("After rotating array:");
    for(i=0;i<nou;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}