/*Task 13: Input n (n <= 100) and then n integers (each from 0 to 9). Print the value that appears the most times
and how many times it appears, in the form shown in the sample. If two values appear the same number of
times, print the smaller value.
Sample Input:
N: 10
Numbers: 2 7 3 7 2 9 7 3 2 7
Sample Output: Most frequent: 7 (4 times)*/
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
    printf("Initial array: ");
    printArray(arr, n);
    // =====================================
    int i , j;
    int count = 0, p =0;
    for(i = 0; i < n ; i++){
    	count = 0;
    	for(j = 0; j < n ; j++){
    		if(arr[j] == arr[i])
    			count++;
}	
	if(count == 1){
    		printf("%d ", arr[i]);
    		p++;
    }
    }
	 if(p == 0)
    	printf("None");
	//arr[count];
	// PRINT FINAL ARRAY
    //printf("Final array: ");
    //printArray(arr, count);

    return 0;
}
