/*  Task 9: Input n (n <= 100) and then n integers. Print All different if no value appears more than once, otherwise
print Duplicates found.
Sample Input:
N: 5
Numbers: 4 8 1 9 6
Sample Output: All different*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Input array elements
void scanArray(int arr[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}
// Generate random array (0 to 99)
void genArray(int arr[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        arr[i] = rand() % 11;
    }
}
// Print array elements
void printArray(int arr[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int n, arr[100];
    srand(time(0));
    printf("Enter size: ");
    scanf("%d", &n);
    // INPUT ARRAY
    printf("Enter elements: ");
    genArray(arr, n);
    // PRINT INITIAL ARRAY
    printf("Initial array: ");
    printArray(arr, n);
    // =====================================
   int i , j;
   char duplicate = 0;
   for(i = 0; i < n ; i ++){
   			
		   for(j = i+1; j < n-1; j++){
		   	if(arr[j] == arr[i])
		   		duplicate = 1;
		   		break;
		   }
		   if(duplicate) 	break;
	   }
	   if(duplicate)  printf("Duplicate");
	   else				printf("Array diff");
    // =====================================
    /*PRINT FINAL ARRAY
    printf("Final array: ");
    printArray(arr, n);*/

    return 0;
}
