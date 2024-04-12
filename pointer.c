#include <stdio.h>

int main(){
    char *buffer= "HarryDo";
    int *pointer, p2;
    p2= 123;
    pointer=&p2;
    printf("The value of pointer is %d\n", *pointer);
    printf("The value is %c ", buffer[1]);
}