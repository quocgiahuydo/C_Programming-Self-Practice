
#include <stdio.h>

int main () {
 
    int nums[] = {3,5,9,9,0};
    int *s0; 
    s0 = nums;
    int s1 = 0;
    while (*s0 != 0) {
        s1 += *s0;
        //adding to s1
        s0 += 1;
        //shifting base address
    }
}