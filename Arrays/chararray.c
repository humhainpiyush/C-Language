#include<stdio.h>

int main(){
    int n;
    printf("Enter the no. of characters: ");
    scanf("%d",&n);
    char c[n] /*= "love"*/ ;
    printf("Enter the characters: ");
    gets(c);
    // scanf("%s",c);
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%c",&c[i]);
    // }
    for (int i = 0; c[i]!= '\0'; i++)
    {
        printf("%c",c[i]);
        
    }
    printf("\n");
    
    return 0;
}