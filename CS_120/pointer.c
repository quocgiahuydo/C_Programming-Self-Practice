#include <stdio.h>
int main()
{
    // define 5 arrays of different types
    int a[10];
    float b[10];
    double c[10];
    long d[10];
    char e[10];

    printf("Addresses A %p %p\n", &a[1], &a[0]);
    printf("Addresses B %p %p\n", &b[1], &b[0]);
    printf("Addresses C %p %p\n", &c[1], &c[0]);
    printf("Addresses D %p %p\n", &d[1], &d[0]);
    printf("Addresses E %p %p\n", &e[1], &e[0]);
    printf("Size of interger %d\n", sizeof(a[10]));
    printf("Size of float %d\n", sizeof(b[10]));
    printf("Size of double %d\n", sizeof(c[10]));
    printf("Size of long %d\n", sizeof(d[10]));
    printf("Size of char %d\n", sizeof(e[10]));

    
}


