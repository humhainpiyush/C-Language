#include<stdio.h>

int main(){
    int n = 0, negative = 0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i<n; i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0; i<n; i++){
        if(a[i] < 0){
            negative = negative + 1;
        }
    }
    printf("Negative numbers: %d\n", negative);
    return 0;
}