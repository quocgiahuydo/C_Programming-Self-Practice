#include <stdio.h>

int i = 0;  
void strcy(char *dst, char *src)
{
    do {
    dst[i] = src[i];
    i++;             // copy characters one byte at a time
}   while (i<22); // until the null terminator is found
 }
int main(){
    char source[]="checking the error";
    char destination[30]="";
    strcy(destination, source);
    printf("Result: %s\n", destination);
}
