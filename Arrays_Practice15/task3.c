/* Practice Task 3: Count even and odd elements. Read N and then N integers into an array. Print how
many of the elements are even and how many are odd.
Input: First line: N (N <= 100). Second line: N integers.
Output: Two lines in the form shown in the sample.
Sample Input:
7
4 7 10 3 8 12 5
Sample Output:
Even: 4
Odd: 3*/
#include<stdio.h>
int main(){
int n,i, even=0, odd=0;
printf("N: ");
scanf("%d",&n );
int x[n];

for(i =0; i< n; i++){
	scanf("%d", &x[i]);
}
for(i=0; i<n; i++){
	if(x[i] % 2 == 0) 
		even++;// 1 2 5 4
	else	
		odd++;
}
	printf("Even: %d\nOdd: %d", even,odd);
return 0;
}
