#include <stdio.h>
#define MAX_LIMIT 100
int i = 0;  
void strcy(char *dst, char *src)
{
    do {
    dst[i] = src[i];
    i++;             // copy characters one byte at a time
}   while (i<22); // until the null terminator is found
 }
int main(){
    char str[MAX_LIMIT];
    fgets(str, MAX_LIMIT, stdin);

   printf("The world you input : %s\n", str);
   //scanf("%s", &str);

    //printf("The value of x is: %c\n", str[0]);
    char source[]="checking the error";
    char destination[30]="";
    strcy(destination, source);
    printf("Result: %s\n", destination);
}
