#include <stdio.h>

int main() {
    int n, i, j, key, prev;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(i = 1; i < n; i++){
        // 1. Only sort if the current element is even
        if(arr[i] % 2 == 0){
            key = arr[i];
            prev = i; // Track the open even slot

            // 2. Scan all the way back to 0 (don't stop at small odd numbers)
            for(j = i - 1; j >= 0; j--){
                if(arr[j] % 2 == 0){
                    if(arr[j] > key){
                        arr[prev] = arr[j];
                        prev = j;
                    } else {
                        break; // Stop only when a smaller/equal EVEN number is found
                    }
                }
            }
            arr[prev] = key; // 3. Place key into the last opened even slot
        }
    }

    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    } // 4. Close the print loop BEFORE return 0

    return 0;
}
