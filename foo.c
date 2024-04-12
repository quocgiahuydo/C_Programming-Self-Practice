#include <stdio.h>


int x; 
void bar(int a, int b){
    printf("Value of a: %d\nValue of b: %d\n", a,b);
    printf("Address of a:%p\nAddress of b %p\n", &a,&b);
    
}
void foo(){
    int q =0;
    static int z =0;

    printf("Value of q: %d\nValue of z: %d\nValue of x: %d\n", q,z,x);
    printf("Address of q: %p\nAddress of z %p\nAddress of x: %p", &q,&z,&x);
    
    printf("\n");

    for (int i=0; i<10; i++){
        z++;
        q++;
    }
    printf("Value of q: %d\nValue of z: %d\nValue of x: %d\n", q,z,x);
    printf("Address of q: %p \nAddress of z %p\nAddress of x: %p", &q,&z,&x);
    printf("\n");
    
    bar(q,z);

}

int main(){
    foo();
    printf("\n");
        foo();
    printf("\n");
        foo();
    printf("\n");

}
