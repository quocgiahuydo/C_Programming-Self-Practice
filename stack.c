#include <stdio.h>

char arr[]= "GAHGASDGAGHJS";
char switchcashe(char ch){
    if ((ch>='A')&&(ch <='Z')){
        ch = ch +32;
    }
    return ch;
}

int main(){
    char *ptr=arr;
    while(*ptr!='\0'){
        *ptr=switchcashe(*ptr);
        ptr++;
    }
    printf("The string: %s", arr);
    return 0;
}