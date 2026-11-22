#include <stdio.h>
//#include <stdbool.h>

#define TRUE 1
#define FALSE 0

typedef char BOOL;

/* function prototypes are here */
BOOL isPrime(int num);

int main ()
{
	/* You shouldnt need to do any logic in main function. 
	 * Your function must satisfy ALL possible test cases below. 
	 * You may add your own test cases, but do NOT remove my test cases. */

	printf("%s\n", isPrime(9) ? "true" : "false");  // false
	printf("%s\n", isPrime(8) ? "true" : "false");  // false
	printf("%s\n", isPrime(17) ? "true" : "false"); // true
	printf("%s\n", isPrime(47) ? "true" : "false"); // true
	printf("%s\n", isPrime(2) ? "true" : "false");  // true
	printf("%s\n", isPrime(1) ? "true" : "false");  // false
	printf("%s\n", isPrime(0) ? "true" : "false");  // false
	printf("%s\n", isPrime(-3) ? "true" : "false"); // false
	
	return 0;
}

// You fill in here
BOOL isPrime(int num)
{
	if(num <= 1){
		return FALSE;
	}

	if(num == 2){
		return TRUE;
	}

	if(num % 2 == 0){
		return FALSE;
	}

	for(int i = 3; i * i <= num; i++){
		if(num % i == 0){
			return FALSE;
		}
	}

	return TRUE;
	
}