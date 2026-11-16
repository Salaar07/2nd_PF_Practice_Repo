/* Practice Task 11: Second largest element. Read N (N >= 2) and then N distinct integers into an array.
Print the second largest element. Do not sort the array: find the answer in a single pass by keeping track
of the largest and the second largest values seen so far.
Input: First line: N (2 <= N <= 100). Second line: N distinct integers.
Output: The second largest element.
Sample Input 1:
6
12 45 7 88 23 60
Sample Output 1: 60
Sample Input 2:
3
5 2 9
Sample Output 2: 52*/
#include<stdio.h>
int main(){
int n,i,largest, largest2, index;
printf("N: ");
scanf("%d",&n );
int x[n];

for(i =0; i< n; i++){
	scanf("%d", &x[i]);
}

if(x[0] >x[1])	{
largest = x[0];
largest2 = x[1];
}
else 	{
largest = x[1];
largest2 = x[0];
}
for(i=0; i < n; i++){
	if(largest < x[i] )	{
		largest2 = largest;
		largest = x[i];		
}
//	else if( largest2 < x[i]){
	//	largest = largest2;
	//	largest2 = 
//	}
	}
printf("Largest: %d\n2nd Largest: %d\n",largest,largest2);// what if the largest value repeats?it will show index for the first time it found
return 0;
}