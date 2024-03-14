#include<stdio.h>

int main() {
    char* buffer = "Hello";
    char store_value[10];
    int total_read;
 
    total_read = sscanf(buffer, "%s" , store_value);

    printf("Value in buffer: %s",store_value);
    printf("\nTotal items read: %d",total_read);

    return 0;
}