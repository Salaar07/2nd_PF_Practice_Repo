/* Practice Task 5: Copy and double. Read N and then N integers into an array x. Create a second array y
of the same size such that y[i] = 2 * x[i]. Print both arrays, each on its own line.
Input: First line: N (N <= 100). Second line: N integers.
Output: Two lines in the form shown in the sample.
Sample Input:
5
3 8 -2 10 6
Sample Output:
Original: 3 8 -2 10 6
Doubled: 6 16 -4 20 12
*/
#include<stdio.h>
int main(){
int n,i,j;
printf("N: ");
scanf("%d",&n );
int x[n];//1st array

for(i =0; i< n; i++){
	scanf("%d", &x[i]);
}
int y[n];//2nd array
for(i=0; i<n; i++){
	y[i] = 2* x[i];
	}
printf("Original: ");
for(i =0; i< n; i++)
	printf("%d ",x[i]);
printf("\n");
printf("Doubled: ");
for(i =0; i< n; i++)
	printf("%d ", y[i]);
	printf("\n");

return 0;
}