#include <stdio.h>
//#include <stdbool.h>

#define TRUE 1
#define FALSE 0

typedef char BOOL;

/* function prototypes are here */
BOOL isPowerOfTwo(int num);

int main ()
{
	/* You shouldnt need to do any logic in main function. 
	 * Your function must satisfy ALL possible test cases below. 
	 * You may add your own test cases, but do NOT remove my test cases. */

	printf("%s\n", isPowerOfTwo(9) ? "true" : "false");  // false
	printf("%s\n", isPowerOfTwo(17) ? "true" : "false"); // false
	printf("%s\n", isPowerOfTwo(16) ? "true" : "false"); // true
	printf("%s\n", isPowerOfTwo(2) ? "true" : "false");  // true
	printf("%s\n", isPowerOfTwo(1) ? "true" : "false");  // true
	printf("%s\n", isPowerOfTwo(0) ? "true" : "false");  // false
	printf("%s\n", isPowerOfTwo(-4) ? "true" : "false"); // false
	
	return 0;
}

// You fill in here

BOOL isPowerOfTwo(int num)
{
	if(num <= 0){
		return FALSE;
	}

	while(num % 2 == 0){
		num = num / 2;
	}

	return (num == 1) ? TRUE : FALSE;
}