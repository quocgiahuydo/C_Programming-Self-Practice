#include <stdio.h>


void bar(int a, int b){
    printf("The value of a: %d, and b %d\n", a,b);
    printf("The value address of a: %p, and address of b %p\n", &a,&b);
    
}
void foo(){
    int q =0;
    static int z =0;

    printf("The value of q: %d, and z %d\n", q,z);
    printf("The value address of q: %p, and address of z %p\n", &q,&z);
    printf("\n");

    for (int i=0; i<10; i++){
        z++;
        q++;
    }
    printf("The value of q: %d, and z %d\n", q,z);
    printf("The value address of q: %p, and address of z %p\n", &q,&z);

    printf("\n");
    
    bar(q,z);

}

int main(){
    foo();
    printf("\n");

    printf("\n");
    foo();

    printf("\n");
    foo();
}
