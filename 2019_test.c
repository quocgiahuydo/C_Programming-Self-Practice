#include <stdio.h>


void Array(int *x, int *y, int *z, int m){
    for(int i=0; i<m; i++){
        z[i]=x[i]+y[i];
    }
    for(int i=0; i<m; i++){
        printf("The value in z: %d\n", z[i]);
    }
}

int main(){
    int x_array[]={2,3,5};
    int y_array[]={1,1,1};
    int z_array[100];
    Array(x_array,y_array,z_array,3);
}