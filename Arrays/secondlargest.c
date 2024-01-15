#include<stdio.h>
#include<limits.h>

int main(){
    int n = 0, max1, max2;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i<n; i++){
        scanf("%d",&a[i]);
    }
    max1 = max2 = INT_MIN;
    for(int i = 0; i<n; i++){
        if(a[i]>max1){
            max2 = max1;
            max1 = a[i];
        }
        else if(a[i]>max2 && a[i]<max1){
            max2 = a[i];
        }
    }
    printf("Second largest: %d\n", max2);
    return 0;
}