#include<stdio.h>
int main(){
    int nou,count = 0,prime,i,j;
    printf("Enter the size of array:");
    scanf("%d",&nou);
    int arr[nou];
    printf("Enter the elements in Array:");
    for(i = 0;i<nou;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<nou;i++){
        prime = 1;
        if(arr[i]<=1){
            prime = 0;
        }else{
          for( j = 2;j*j<=arr[i];j++){
                if(arr[i]%j == 0){
                    prime = 0;
                    break;
                }
            }
        }
        if(prime){
            count++;
        }
    }
    printf("Total prime nos in array is:%d",count);
    return 0;
}