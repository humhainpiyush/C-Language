#include<stdio.h>

int main(){
    int a = 8;
    int b = -6; // to represent a negative number in bits --> find out the two's complement of its positive number
    int c = a & b;
    int d = a | b;
    int e = ~a;
    int f = a ^ b;
    int g = a<<1; // multiplies by 2^k
    int h = a>>1; // divides by 2^k
    printf("%d\n",c);
    printf("%d\n",d);
    printf("%d\n",e);
    printf("%d\n",f);
    printf("%d\n",g);
    printf("%d\n",h);
    return 0;
}

/*
    Facts:
    1. Left shift of '0' will result in 0 everytime we do left shift.
    2. Right shift of '-1' will result in -1 everytime we do right shift.
*/