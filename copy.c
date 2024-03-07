#include <stdio.h>

void strcy(char *dst, const char *src) {
    int i = 0;
    do {
        dst[i] = src[i];
        i++;
    } while (src[i] != '\0' && i < 19); // until the null terminator is found or destination array is full
    dst[i] = '\0'; // null-terminate the destination string
}

int main() {
    char example[] = "Waith thatttt";
    char dest[20]; // Make sure destination array is large enough to hold the copied string
    strcy(dest, example);
    printf("Copied string: %s\n", dest);
}