#include<stdio.h>
#define MAX 100
int main(){
    int a[MAX], b[MAX];
    int size;
    scanf("%d",&size);
    printf("Enter elements: ");
    for(int i = 0; i< size; i++){
        scanf("%d",&a[i]);

    }

    for(int i = 0; i < size; i++){
        int count = 1;
        if(a[i] != -1){
            for(int j = i+1 ; j < size; j++){
                if(a[i]==a[j]){
                    count = count + 1;
                    a[j] = -1;
                }
            }
            b[i] = count;
        }
        
    }
    
    for(int i = 0; i<size; i++){
        if(a[i] != -1){
            printf("Freq(%d): %d\n",a[i], b[i]);
        }
    }
    
    return 0;
}