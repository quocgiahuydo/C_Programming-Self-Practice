#include <stdio.h>
 
int main(void)
{
    // output may depend upon the compiler
    printf("My mobile number "
           "is 78\a7\a3\a9\a2\a3\a4\a0\a8\a\n");
    // \b - backspace character transfers
    // the cursor one character back with
    // or without deleting on different
    // compilers.
    printf("Hello \b\b\b\b\b\bHi Geeks\n");


    // Here we are using \t, which is
    // a horizontal tab character.
    // It will provide a tab space
    // between two words.
    printf("Hello \t GFG\n");

    // Here we are using \v, which
    // is vertical tab character.
    printf("Hello friends\v");
 
    printf("Welcome to GFG\n");

    // Here we are using \r, which
    // is carriage return character.
    printf("Hello  \rGeeksforGreeks\n");

    // Here we are using \,
    // It contains two escape sequence
    // means \ and \n.
    printf("Hello\\GFG\n");
// C program to illustrate \' escape
// sequence/ and \" escape sequence to
// print single quote and double quote.

    printf("\' Hello Geeks\'\n");
    printf("\" Hello Geeks\"\n");
    /// Here we are using \?, which is
    // used for the presentation of trigraph
    // in the early of C programming. But
    // now we don't have any use of it.
    printf("\?\?!\n");
    // We are using \xhh escape sequence.
    // Here hh is one or more hexadecimal
    // digits(0....9, a...f, A...F).
    char* s = "B\x70";
    printf("%s", s);
 
    return (0);
}
    