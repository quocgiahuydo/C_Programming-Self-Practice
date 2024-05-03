#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *ptr, *ptr2;
    char data[2002];
    ptr=fopen("data.txt", "r");
    ptr2=fopen("transfer.txt", "w");
    if(ptr2==NULL){
        printf("Unable to find the file");
        exit(1);
    }
    if (ptr==NULL){
        printf("Unable to identify the file");
        exit(1);
    }
    while (!feof(ptr)) { // check that the end of the file hasn't been reached 
    fscanf(ptr, "%s", data);
    printf("Read data: %s\n", data);
    fprintf(ptr2,"%s",data);
    fprintf(ptr2," ");    
    
}
    fclose(ptr);
    fclose(ptr2);

}
