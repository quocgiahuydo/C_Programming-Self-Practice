#include <stdio.h>
#define MAX_LIMIT 100
int i = 0;  
void strcy(char *dst, char *src)
{
    do {
    dst[i] = src[i];
    i++;             // copy characters one byte at a time
}   while (src[i]!=NULL); // until the null terminator is found
 }
int main(){
    char str[MAX_LIMIT];
    fgets(str, MAX_LIMIT, stdin);

    printf("The world you input : %s\n", str);
   //scanf("%s", &str);

    //printf("The value of x is: %c\n", str[0]);
    char source[10000];
    printf("Please input: \n");
    scanf("%s", source);

    char destination[3000];
    strcy(destination, source);
    int i=0;
    do{
        printf("%c", destination[i]);
        i++;
            }
    while(destination[i]!='\0');
    printf("\n");
    printf("%s", destination);
    
}
