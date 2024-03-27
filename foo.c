#include <stdio.h>

void foo(){
    int q =0;
    static int z =0;

    for (int i=0; i<10; i++){
        z++;
        q++;
    }
    printf("The value of q: %d, and z %d\n", q,z);
    printf("The value address of q: %p, and address of z %p\n", &q,&z);
    


}

int main(){
    foo();
    foo();
}