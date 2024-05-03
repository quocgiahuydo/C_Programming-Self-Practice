#include <stdio.h>

int arr[]={10,22,3,432,232,44,122};
char cha[]="CS1202";

int main(){
    int *ptr;
    ptr= arr;
    while (*ptr!='\0'){
        printf("The value of the pointer is %d\n", *ptr);
        printf("The value of the pointer is %p\n", ptr);
        
        ptr=ptr+1;
    }
    int arr_size= sizeof(arr)/sizeof(arr[0]);
        printf("The main address of value in array: %p\n", arr);
    int char_size= sizeof(cha)/sizeof(cha[0]);
    
    for (int i =0; i< arr_size; i++){
        printf("The %d address of value in array: %p\n", i, &arr[i]);
    }
    printf("\n");
    for (int i =0; i< char_size; i++){
        printf("The %c address of value in array: %p\n", cha[i], &cha[i]);
    }
}
