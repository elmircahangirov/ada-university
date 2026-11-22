#include <stdio.h>

#define SIZE(a) (int) (sizeof(a) / sizeof(a[0]))

/* function prototypes are here */
void printArray(int arr[], int len);
void order49(int arr[], int len);

int main() 
{
	/* You shouldnt need to do any logic in main function. 
	 * Your function must satisfy ALL possible test cases below. 
	 * You may add your own test cases, but do NOT remove my test cases. */
	 
	int nums1 [] = {1,4,1,9};
	int nums2 [] = {1,4,1,9,9,4,1}; 
	int nums3 [] = {4,2,2,9};
		
	order49(nums1);
	order49(nums2);
	order49(nums3);

	printArray(nums1, SIZE(nums1));  // [1,4,9,1]
	printArray(nums2, SIZE(nums2));  // [1,4,9,1,1,4,9]
	printArray(nums3, SIZE(nums3));  // [4,9,2,2]
	
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

void order49(int arr[], int len)
{
	int i, j, temp;

	for(i = 0; i < len; i++)
	{
		if(arr[i] == 4 && arr[i + 1] != 9)
		{
			for(j = 0; j < len; j++)
			{
				if(arr[j] == 9 && (j == 0 || arr[j-i] != 4))
				{
					temp = arr[i + 1];
					arr[i + 1] = arr[j];
					arr[j] = temp;
					break;
				}
			}
		}
	}
}

