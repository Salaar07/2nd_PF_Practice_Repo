/* Practice Task 2: Largest element and its position. Read N and then N distinct integers into an array.
Print the largest element and the index at which it is stored (indices start from 0).
Input: First line: N (N <= 100). Second line: N distinct integers.
Output: Two lines in the form shown in the sample.
Sample Input:
6
12 45 7 88 23 9
Sample Output:
Largest: 88
Index: 3*/
#include<stdio.h>
int main(){
int n,i,largest, index;
printf("N: ");
scanf("%d",&n );
int x[n];

for(i =0; i< n; i++){
	scanf("%d", &x[i]);
}
largest = x[0];
for(i=1; i<n; i++){
	if(x[i] > largest ) {
		largest = x[i];  index = i;}// 1 2 5 4
	}
printf("Largest: %d\nIndex: %d", largest,index);// what if the largest value repeats?it will show index for the first time it found
return 0;
}