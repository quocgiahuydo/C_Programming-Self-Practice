#include <stdio.h>
#include <stdlib.h>

int main(){
    char buffer [300];
    char buffer2 [400];
    FILE *ptr, *ptr2, *ptr3;
    ptr3=fopen("trans.txt", "a");
    ptr = fopen("data.txt", "r");
    ptr2= fopen("transfer.txt", "w");
    if (ptr==NULL || ptr2==NULL || ptr3==NULL){
        printf("Unable to access file");
        exit(1);
    }
    printf("Please input your str:\n");
    fgets(buffer2, 100, stdin);
    fgets(buffer, 100, ptr);
    printf("The string from file is: %s", buffer);
    fputs(buffer,ptr3);
    fprintf(ptr2,"%s",buffer2);
    printf("The input string is: %s", buffer2);

    fclose(ptr);
    fclose(ptr3);
    fclose(ptr2);
    return (0);
}