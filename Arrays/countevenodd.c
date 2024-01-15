#include<stdio.h>

int main(){
    int n = 0, even=0, odd = 0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i<n; i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0; i<n; i++){
        if(a[i]%2 == 0){
            even = even + 1;
        }
        else{
            odd = odd + 1;
        }
    }
    printf("Even: %d\n",even);
    printf("Odd: %d\n",odd);
    return 0;
}