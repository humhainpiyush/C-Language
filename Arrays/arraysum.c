#include<stdio.h>

int main(){
    int a[5];
    int sum = 0;
    for(int i = 0; i<5; i++){
        scanf("%d",&a[i]);
    }
    for(int i=0; i<5; i++){
        sum = sum + a[i];
    }
    printf("Sum of the elements of the array is: %d\n",sum);

    return 0;
}