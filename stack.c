#include <stdio.h>

char arr[]= "Welcome to CS120";
char switchcashe(char ch){
    if ((ch>='a')&&(ch <='z')){
        ch = ch -32;
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