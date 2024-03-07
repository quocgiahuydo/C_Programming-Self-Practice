#include <stdio.h>

void print_bits(int n, int bits)
{
    // 0110 & 0011   (0&0)(1&0)(1&1)(0&1) = 0010

    // 0110
    // 0011
    // ----
    // 0010

    for(int i = bits - 1; i >= 0; --i)
    {
        if(n & (1 << i))  // For example 0001 << 2 = 0100
        {
            printf("1");
        }
        else
        {
            printf("0");   
        }      
    }
}

void multi(int a){
    int count=0;
    for(int i = 1+a; i < 40; i=i+1+a)
    {
        count=count +1;
        //printf("\t");
        print_bits(i, 8);
        printf("\t");
        if(count==5){
            break;
        }
    }

}
int main()
{
    for (int b = 0; b<6;++b){
        print_bits(0,8);
        //printf("\t");
       	printf("\t");
        
    }
    printf("\n");
    for (int a =0; a<5; ++a){
        print_bits(0,8);
        printf("\t");
        multi(a);
        printf("\n");
    }
}

//Harry Do


