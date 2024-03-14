#include <stdio.h>
int determine_op(int operation, int rows, int columns){
    int v;
    switch (operation)
{
  case 0:
    v = rows * columns;
    break;
  case 1:
    v = rows & columns;
    break;
  case 2:
    v = rows | columns;
    break;
}
    return v;
}
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

void table(int rows, int columns, int value, int operations){
    int v;
    for (int j=0; j<columns; j++){
    for(int i = 0; i < rows; i++)
    {
v=determine_op(operations,i,j);
print_bits(v, value);
printf("\t");
}
    printf("\n");
    }
}
int main()
{
    table(8, 8, 3, 0);
    printf("\n");
    table(8, 8, 3, 1);
    printf("\n");
    table(8, 8, 3, 2);
    return 0;
}
//Harry Do
