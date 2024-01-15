#include<stdio.h>

int main(){
    int a = 5;
    int b = 4;
    printf("%d\n",a+++b);//This will evaluate a's post increment and then add it to b i.e., firstly a and b will be added and then a will be increased
    printf("a = %d\nb = %d\n",a,b);

    int i = (a<b) && (++b);
    printf("%d\n%d\n",i,b);// b = 4 because it first evaluates the left side expression and if it turns out to be false, it stops

    i = (a>b) && (++b);
    printf("%d\n%d\n",i,b);
    
//same is with the '||' operators. If the first expression is true then rest of the expression is not evaluated
    return 0;
}