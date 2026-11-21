/*  Task 1: Input n (n <= 100) and then n integers, then a value x. Print how many times x appears in the array.
Sample Input:
N: 8
Numbers: 3 1 4 1 5 1 2 6
X: 1
Sample Output: Count: 3*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
srand(time(0));
int n, i, x, count = 0;
do{
   printf("N: ");
   scanf("%d",&n );
}while(n < 0 || n > 100);
int arr[n];				//block to generate array
for(i =0; i< n; i++)
	arr[i] = rand()%10 + 1;

printf("Numbers: ");	//Block to print array
for(i =0; i< n; i++)
	printf("%d ", arr[i]);
printf("\n");
printf("X:");
scanf("%d", &x);

for(i =0; i< n; i++)
	if (arr[i] == x)	count++;

printf("Count: %d ", count);
}