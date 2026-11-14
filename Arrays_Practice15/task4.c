/* Practice Task 4: Linear search. Read N, then N integers into an array, then a value key. Search the array
from the beginning and print the index of the first element equal to key. If key is not present print Not
found.
Input: First line: N (N <= 100). Second line: N integers. Third line: key.
Output: Found at index followed by the index, or Not found.
Sample Input 1:
6
10 25 30 25 40 50
25
Sample Output 1: Found at index 1
Sample Input 2:
6
10 25 30 25 40 50
99
Sample Output 2: Not found*/
#include<stdio.h>
int main(){
int n,i, even=0, odd=0;
printf("N: ");
scanf("%d",&n );
int x[n];

for(i =0; i< n; i++){
	scanf("%d", &x[i]);
}
int key;
printf("Key: ");
scanf("%d", &key);
for(i=0; i<n; i++){
	if(x[i]  == key){
		printf("Found at index %d", i);
		break;
	}
}
if(i==n)	printf("not found");

return 0;
}