/* Task 11: Input n (n <= 100) and then n integers. Remove every repeated value so that only the first occurrence
of each value stays, keeping the original order. Do this in the same array by shifting elements to the left (do not
use a second array). Print the resulting array.
Sample Input:
N: 9
Numbers: 4 7 4 2 7 7 9 2 4
Sample Output: 4 7 2 9
 */
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
    int count = 0;
    for(i = 0; i < n ; i++){
    	for(j = 0; j < count ; j++){
    		if(arr[j] == arr[i]){
    				break;
    			}
}		if(j == count){
    		arr[count] = arr[i];
    		count++;
	}
}
	//arr[count];
	// PRINT FINAL ARRAY
    printf("Final array: ");
    printArray(arr, count);

    return 0;
}
