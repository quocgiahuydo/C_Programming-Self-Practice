#include <stdio.h>

// global array
char str[] = "Homework-10";

// switch lowercase characters in str to uppercase
char uppercase(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
    {
        ch = ch - 32;
    }
    return ch;
}

int main()
{
    for(int i = 0; str[i] != '\0'; i++)
    {
        str[i] = uppercase(str[i]);
    }
    printf("%s", str);
}