#include <stdio.h>


void function(int *pointer){
    int len=sizeof(*pointer)/sizeof(pointer[0]);
    int sth =0;
    for (int i=0; i<len; i++){
        sth =sth + pointer[i];
        printf("The value of sth %d\n", sth);
    }

    printf("The length of an array %d\n", len);
    printf("The sum of variable in the array %d\n", sth);
}

int main(){
    int arr[]={};
    int ans; 
    int x = 0;
    int inp_numb;
    long int size;
    do {
        printf("Do you want to continue");
        scanf("%d", &ans);
        printf("Please input a number\n");
        scanf("%d", &inp_numb);
        
        arr[x]= inp_numb;

        //printf("Print the value of array: %d\n", arr[x]);  
        x=x+1;
    }
    while (ans != 1 );
    for(int i=0; i<10; i++){
        printf("The value is %d\n", arr[i]);
    }
    printf("The size of arr %d\n", x);
    size = sizeof(arr)/sizeof(arr[0]);
    printf("The size of array %ld", size);
}    
