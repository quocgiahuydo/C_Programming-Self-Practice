#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    int month;
    int year;
    int test;
    char buffer[500];
    char buffer2[300];
    char buffer3[200];
  
    strcpy(buffer,"Monday April 22 2024");
    sscanf(buffer, "%s %s %d %d", buffer2, buffer3, &month, &year);
    sscanf(buffer, "%d", &test);
    printf("The value from test: %d\n", test);
    //sprintf(buffer,"The string i want to print\n");
    printf("Today is %s\nDate: %d\nMonth: %s\nYear: %d\n ", buffer2, month, buffer3, year);
}