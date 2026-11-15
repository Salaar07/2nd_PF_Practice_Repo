/*Practice Task 7: Count occurrences of a value. Read N, then N integers into an array, then a value k.
Print how many times k appears in the array.
Input: First line: N (N <= 100). Second line: N integers. Third line: k.
Output: A single integer.
Sample Input 1:
8
3 7 3 3 9 7 3 1
3
Sample Output 1: 4
Sample Input 2:
8
3 7 3 3 9 7 3 1
5
Sample Output 2: 0*/
#include<stdio.h>
int main(){
int n,i, count = 0;
printf("N: ");
scanf("%d",&n );
int x[n];

for(i =0; i< n; i++){
	scanf("%d", &x[i]);
}
int k;
printf("K: ");
scanf("%d", &k);
for(i=0; i<n; i++){
	if(x[i]  == k)
		count++;
	
}
printf("Count: %d\n",count);

return 0;
}