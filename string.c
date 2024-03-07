#include <stdio.h>
char *array="123Go";
char greeting[10]="Hello !";
int main(){
    printf("The address of the first element %p\n", array);
    printf("The size of null character %lu\n", sizeof(array[5]));
    printf("the first array is %c\n", array[0]);
    printf("The value of array %s\n", array);
    printf("size of normal array: %lu\n", sizeof(array));
    printf("size of greeting: %lu\n",sizeof(greeting));
    printf("String example %s\n", greeting);
    return (0);
}


