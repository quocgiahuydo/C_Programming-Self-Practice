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
    int arr[]={100,2,5,2};
    function(arr);
    /*int * x; s
    printf("\n");
    scanf("%d", x);
    printf("The value of x is %d\n",*x);*/
}