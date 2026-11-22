#include <stdio.h>
//#include <stdbool.h>

#define TRUE 1
#define FALSE 0

typedef char BOOL;

/* function prototypes are here */
BOOL isGreatNumber(int num);

int main ()
{
	/* You fill in here (use scanf to read input from user) */
	int n, i;
	scanf("%d", &n);
	// You fill in here
	for(i = 1; i <= n; i++){
		if(isGreatNumber(i)){
			printf("%d\n", i);
		}
	}

	return 0;
}

// You fill in here

BOOL isGreatNumber(int num)
{
	int i, sum = 0;

	if(num <= 1){
		return FALSE;
	}

	for(i = 1; i < num; i++){
		if(num % i == 0){
			sum += i;
		}
	}

	return(sum == num) ? TRUE : FALSE;
}
