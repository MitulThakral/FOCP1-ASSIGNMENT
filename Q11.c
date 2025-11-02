#include<stdio.h>
int main(){
    int nou;
   printf("\nEnter the size:");
   scanf("%d",&nou);
    int arr[nou];
    int even[nou],odd[nou];
    int evenscore = 0,oddscore = 0;
    printf("\nEnter the Numbers in array:");
    for(int i = 0;i<nou;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<nou;i++){
        if(arr[i]%2 == 0){
            even[evenscore] = arr[i];
            evenscore++;
        }else{
            odd[oddscore] = arr[i];
            oddscore++;
        }
    }
    printf("\nEven score is:");
    for(int i = 0;i<evenscore;i++){
         printf("%d ",even[i]);
    }
    printf("\nodd score is:");
        for(int i = 0;i<oddscore;i++){
         printf("%d ",odd[i]);
    }
    return 0;
}