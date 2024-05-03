#include <stdio.h>
#include <stdlib.h>
int main(void) { 
    FILE *fptr;
    if ((fptr = fopen("result.txt", "w")) == NULL) {
    printf("Unable to open result.txt for writing.\n");
    exit(1); // exit the program indicating unsuccessful execution
        }
    fprintf(fptr, "Hu Hu hu huf Ư ádhadh \n");
    fclose(fptr);
}
