/* Task 10: Input n (n <= 100) and then n integers (each from 0 to 9). Print, in increasing order and separated by
spaces, the digits from 0 to 9 that do not appear in the array. If every digit appears, print None.
Sample Input:
N: 7
Numbers: 3 1 4 1 5 9 2
Sample Output: 0 6 7 8 */
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
    int i , j, c =0; 
	char found;
    for(i = 0; i <= 9; i++){
    	found = 0;
    	for(j = 0; j < n; j++){
    			if(arr[j] == i)
    				found = 1;
		}
		if(!found){
			printf("%d ", i);
			c++;
	}
}
	if(c == 0) 		printf("None");
    // =====================================
    // PRINT FINAL ARRAY
   // printf("Final array: ");
    //printArray(arr, n);

    return 0;
}
