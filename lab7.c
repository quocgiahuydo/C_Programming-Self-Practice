#include <stdio.h>
int Checkvalue(int a, int b){
    int v =0;
    return v = ((a << 2) | (b << 4) | ( a & b ) ) & 0xF351;
}
int main(){
    int value;
    int max=0;
    for (int i=0;i<99; i++){
        value=Checkvalue(i, 582);
        if (max<value){
            max = value;
        }
        else {
            max = max;
        }
    }
    printf("The maximum value is %d\n", max);
}