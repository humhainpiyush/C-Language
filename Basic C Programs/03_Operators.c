#include<stdio.h>

int main(){
    int a = 5;
    int b = 4;
    printf("%d\n",a+++b);//This will evaluate a's post increment and then add it to b i.e., firstly a and b will be added and then a will be increased
    printf("a = %d\nb = %d\n",a,b);
    
    return 0;
}