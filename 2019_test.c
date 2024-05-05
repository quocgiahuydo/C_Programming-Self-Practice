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
    int x_array[]={2,3,5,0};
    int y_array[]={1,1,1};
    int z_array[100];

    int *z= x_array;
    int s1=0;
    while(*z!=0){
        s1=s1+*z;
        z=z+1;
    }
    printf("The value of s1 is %d\n", s1);

    Array(x_array,y_array,z_array,3);

}

