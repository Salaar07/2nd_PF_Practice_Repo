/*Practice Task 1: Sum of an array. Read N and then N integers into an array. Print the sum of all the
elements.
Input: First line: N (N <= 100). Second line: N integers.
Output: The sum.
Sample Input 1:
5
4 8 15 16 23
Sample Output 1: 66
Sample Input 2:
4
-5 10 -3 8
Sample Output 2: 10*/
#include<stdio.h>
int main(){
int n,i,sum=0;
printf("N: ");
scanf("%d",&n );
int x[n];

for(i =0; i< n; i++){
	scanf("%d", &x[i]);
}
for(i=0; i<n;i++){
	sum += x[i];
}
printf("SUM: %d", sum);

return 0;
}
