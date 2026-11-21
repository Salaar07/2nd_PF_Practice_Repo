/* Practice Task 10: Range of an array. Read N and then N integers into an array. Print the largest element,
the smallest element and the difference between them.
Input: First line: N (N <= 100). Second line: N integers.
Output: Three lines in the form shown in the sample.
Sample Input:
6
14 3 27 9 -5 20
Sample Output:
Largest: 27
Smallest: -5
Difference: 32*/
#include<stdio.h>
int main(){
int n,i,largest,smallest, index;
printf("N: ");
scanf("%d",&n );
int x[n];

for(i =0; i< n; i++){
	scanf("%d", &x[i]);
}
largest = x[0];
smallest = x[0];
for(i=1; i<n; i++){
	if(x[i] > largest ) {
		largest = x[i];  index = i;}// 1 2 5 4
	if(smallest > x[i])	{
		smallest = x[i];
	}
	}
printf("Largest: %d\nSmallest: %d\nDifference: %d\n",largest,smallest, largest - smallest);// what if the largest value repeats?it will show index for the first time it found
return 0;
}