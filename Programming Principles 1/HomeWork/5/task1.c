#include <stdio.h>
//#include <stdbool.h>

#define TRUE 1
#define FALSE 0

typedef char BOOL;

/* function prototypes are here */
BOOL isEven(int num);

int main ()
{
	/* You shouldnt need to do any logic in main function. 
	 * Your function must satisfy ALL possible test cases below. 
	 * You may add your own test cases, but do NOT remove my test cases. */

	printf("%s\n", isEven(9) ? "true" : "false"); // false
	printf("%s\n", isEven(8) ? "true" : "false"); // true
	printf("%s\n", isEven(2) ? "true" : "false"); // true
	printf("%s\n", isEven(1) ? "true" : "false"); // false
	printf("%s\n", isEven(0) ? "true" : "false"); // true
	printf("%s\n", isEven(-2) ? "true" : "false"); // true
	printf("%s\n", isEven(-5) ? "true" : "false"); // false
	
	return 0;
}

// You fill in here
BOOL isEven(int num)
{
	if(num % 2 == 0){
		return TRUE;
	}
	else{
		return FALSE;
	}
}