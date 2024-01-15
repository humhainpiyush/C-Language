#include<stdio.h>

int main(){
    int n = 0, count = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(a[i] == a[j]){
                count = count + 1;
            }
        }
    }
    printf("No. of duplicate elements: ")
    return 0;
}