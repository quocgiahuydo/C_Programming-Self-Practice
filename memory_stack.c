#include <stdio.h>

int arr[]={1,2,3,4,5,6,7};

int plus_four(int numb){
     
    int value;
    value = numb+4;
    return value;

}
void print_arr(){
    for(int i=0; arr[i]!='\0'; i++){
        printf("The value is %d\n", arr[i]);
        
    }
    }

int main(){
    int *ptr;
    ptr= arr;
    while(*ptr!='\0'){
        *ptr= plus_four(*ptr);
        ptr = ptr +1;
    }
    print_arr();
    

}