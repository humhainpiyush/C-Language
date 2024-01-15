#include<stdio.h>
#include<conio.h>

int main(){
    int a[5] = {1,2,3,4,5};
    int b[3] = {1,2,6};
    int arr[8], i, n1, n2, n3, found;
    
    n1 = 5, n2 = 3, n3 = 0;

    for(i = 0; i<n1; i++){
        arr[i] = a[i];
    }

    n3 = n1;

    for(i = 0; i < n2; i++){
        found = 0;
        for(int j = 0; j < n1 && !found; j++){
            if(b[i] == a[j]){
                found = 1;
            }
            if(!found){
                arr[n3++] = b[i];
            }
        }
    }

    for(int i = 0; i<n3; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}