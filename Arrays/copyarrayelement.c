#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n], c[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i];
    }
    printf("Element in a[]: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("Element in c[]: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", c[i]);
    }
    printf("\n");

    return 0;
}