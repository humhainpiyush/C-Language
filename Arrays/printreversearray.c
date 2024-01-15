#include<stdio.h>

int main(){
    int n;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    printf("Elements in reversed order: ");
    for(int i = n-1; i>=0 ; i--){
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}