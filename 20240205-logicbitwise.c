// Bitwise operations
// Data types sizes
#include<stdio.h>

int main(){
    int a, b;
    int arr[5];
    // get two numbers from user
    printf("enter two decimal or hexadecimal numbers: ");
    scanf("%i %i", &a, &b);
    
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("bitwise operations:\n");
    printf("a AND b: 0x%x\n", a & b);
    printf("a OR b: 0x%x\n", a | b);
    printf("a XOR b: 0x%x\n", a ^ b);
    printf("NOT a: 0x%x\n\n", ~a);

    printf("logical operations:\n");
    printf("a AND b: 0x%x %d\n", a && b, a && b);
    printf("a OR b: 0x%x %d\n\n", a || b, a || b);

    printf("shift operations:\n");
    printf("shift a one bit left: 0x%x %d\n", a << 1, a << 1);
    printf("shift b one bit right: 0x%x %d\n\n", b >> 1, b >> 1);

    // size of data types
    printf("size of char = %ld bytes\n", sizeof(char));
    printf("size of int = %ld bytes\n", sizeof(int));
    printf("size of long = %ld bytes\n", sizeof(long));
    // calculate size of an array
    printf("size of the array arr of type integer = %ld bytes, number of arr elements = %ld\n", sizeof(arr), sizeof(arr)/sizeof(int));
}

