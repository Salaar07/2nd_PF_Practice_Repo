/*Practice Task 8: Swap first and last. Read N (N >= 2) and then N integers into an array. Swap the first
element with the last element (use a temporary variable) and print the array.
Input: First line: N (2 <= N <= 100). Second line: N integers.
Output: The array after swapping, on one line.
Sample Input:
5
10 20 30 40 50
Sample Output: 50 20 30 40 10*/
#include<stdio.h>
int main(){
int n,i;
printf("N: ");
scanf("%d",&n );
int x[n];

for(i =0; i< n; i++){
	scanf("%d", &x[i]);
}
int k;
	k = x[n-1];
	x[n-1] = x[0];
	x[0] = k;
for(i =0; i< n; i++)
	printf("%d ", x[i]);

return 0;
}