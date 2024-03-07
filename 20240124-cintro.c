#include <stdio.h>
#include <stdlib.h> // for EXIT_SUCCESS

/* C langauge is case-sensitive. This include keywords, variables, and
 * functions names.*/

// preprocessor directive
#define PI 3.14

// global variable
int max = 0;

// function declaration
int findmax(int x, int y, int z);

int main()
{
	// local variables
	int a = 5;
	int b = 10;
	int c = 15;

	int arr[] = {1, 2, 3};		// size = 3
	char array[] = {'A', 'b', 'd'};	// array of single characters, size = 3
	char string[] = "CS120";	// array of null terminated string, size = 6

    float x = a * PI;
    printf("x = %f\n", x);

    printf("a = %d, b = %d, c = %d, x = %f, Pi = %f\n", a, b, c, x, PI);
    
	// access array item using array index starting at index 0
    for(int i = 0; i < 3; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

	// find largest value and save it in the global variable max
	max = findmax(a, b, c);
	// print max
	printf("max = %d\n", max);

	// nested scope
	{
	    // variable shadowing: define a variable in an inner-scope with the
	    // same name as a variable in an outer-scope
	    int a = 100;
		printf("a in inner-scope = %d\n", a);
		
		int q = 10;
		a = a + q;	// valid, "a" and "q" are defined
	}

	printf("a in outer-scope = %d\n", a);

    //a = a + q	// not valid, "q" not defined

    return EXIT_SUCCESS; // EXIT_SUCCESS = 0, EXIT_FAILUTE = non-zero value
}

// findmax function
int findmax(int x, int y, int z)
{
    if((x >= y) && (x >= z))
        return x;
    else if ((y >= z) && (y >= x))
        return y;
    else
        return z;
}

