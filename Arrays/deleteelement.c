#include<stdio.h>
#define MAX 100

int main(){
    int a[MAX];
    int size = 0, pos = 0;
    printf("Enter size of array: ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the position; ");
    scanf("%d", &pos);

    if (pos >= size + 1 || pos < 0)
    {
        printf("Invalid position to insert.");
    }
    else
    {
        for (int i = pos-1; i < size-1; i++)
        {
            a[i] = a[i + 1];
        }

        size--;
    }
    printf("New Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}