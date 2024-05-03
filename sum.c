#include <stdio.h>

int f,g,y ;

int sum(int f, int g ){
    return f+g;
}

int main(void){
    f= 2;
    g=3;
    y=sum(f,g);
}