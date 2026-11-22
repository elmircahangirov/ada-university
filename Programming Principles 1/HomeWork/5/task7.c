#include <stdio.h>

#define SIZE(a) (int) (sizeof(a) / sizeof(a[0]))

/* function prototypes are here */
void printArray(int arr[], int len);
void zeroComesFirst(int arr[], int len);


int main() 
{
	/* You shouldnt need to do any logic in main function. 
	 * Your function must satisfy ALL possible test cases below. 
	 * You may add your own test cases, but do NOT remove my test cases. */
	 
	int nums1 [] = {1,0,0,1};
	int nums2 [] = {0,1,5,0,2}; 
	int nums3 [] = {1,0};
		
	zeroComesFirst(nums1, SIZE(nums1));
	zeroComesFirst(nums2, SIZE(nums2));
	zeroComesFirst(nums3, SIZE(nums3));

	printArray(nums1, SIZE(nums1)); // [0,0,1,1]
	printArray(nums2, SIZE(nums2)); // [0,0,1,5,2]
	printArray(nums3, SIZE(nums3)); // [0,1]	
	
	return 0;
}

void printArray(int arr[], int len)
{
	int i;

	for (i=0; i<len; i++)
		printf("%d ", arr[i]);

	printf("\n");
}

// You fill in here

void zeroComesFirst(int arr[], int len)
{
	int i;
	int j = len - 1;

	for(i = len - 1; i >= 0; i--){
		if(arr[i] != 0)
		{
			arr[j] = arr[i];
			j--;
		}
	}

	while (j >= 0)
	{
		arr[j] = 0;
		j--;
	}
}

