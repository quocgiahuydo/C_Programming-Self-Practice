#include <stdio.h>

int main(){
    int *pointer, p2;
    p2= 123;
    pointer=&p2;
    printf("The value of pointer is %d\n", *pointer);
}