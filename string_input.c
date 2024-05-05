#include<stdio.h>

int main() {
    char* buffer ="Hello";
    char store_value[10000];
    int total_read;
    char *pts;
 
   //

    printf("Value in buffer: %s",store_value);
    printf("\nTotal items read: %d\n",total_read);
    printf("Plqease input a string \n");
    scanf("%s", store_value);
    printf("The string is : %s", store_value);

    return 0;
}