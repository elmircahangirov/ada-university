#include <stdio.h>
//#include <stdbool.h>

#define TRUE 1
#define FALSE 0
#define SIZE(a) (int) (sizeof(a) / sizeof(a[0]))

typedef char BOOL;

/* function prototypes are here */
BOOL isOnly916(int arr[], int len);

int main() 
{
	/* You shouldnt need to do any logic in main function. 
	 * Your function must satisfy ALL possible test cases below. 
	 * You may add your own test cases, but do NOT remove my test cases. */

   int nums1 [] = {1,9,1,6};
   int nums2 [] = {1,9,2,6}; 
   int nums3 [] = {1};

   printf("%s\n", isOnly916(nums1, SIZE(nums1)) ? "true" : "false"); // true
   printf("%s\n", isOnly916(nums2, SIZE(nums2)) ? "true" : "false"); // false
   printf("%s\n", isOnly916(nums3, SIZE(nums3)) ? "true" : "false"); // true
   
   return 0;
}

// You fill in here

BOOL isOnly916(int arr[], int len)
{
   for(int i = 0; i < len; i++)
   {
      if(arr[i] != 9 && arr[i] != 1 && arr[i] != 6)
         return FALSE;
   }
   
   return TRUE;
}

