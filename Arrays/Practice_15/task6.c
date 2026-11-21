/*Practice Task 6: Sum at even and odd indices. Read N and then N integers into an array. Print the sum
of the elements stored at even indices (0, 2, 4, ...) and the sum of the elements stored at odd indices (1, 3,
5, ...) separately.
Input: First line: N (N <= 100). Second line: N integers.
Output: Two lines in the form shown in the sample.
Sample Input:
5
4 9 2 7 6
Sample Output:
Sum at even indices: 12
Sum at odd indices: 16*/
#include<stdio.h>
int main(){
int n,i;
int even=0, odd =0;
printf("N: ");
scanf("%d",&n );
int x[n];//1st array

for(i =0; i< n; i++){
	scanf("%d", &x[i]);
}
int y[n];//2nd array
for(i=0; i<n; i++){
	if(x[i]%2 == 0)		even += x[i];
	else				odd += x[i];
	}
printf("Sum at even indices: %d\n", even);
	//printf("%d ",x[i]);//prints raw byte becausee of out of bound error, that is what happens in c 
printf("Sum at odd indices: %d ", odd);

return 0;
}