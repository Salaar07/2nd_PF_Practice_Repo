/*  Task 8: Input n (n <= 100) and then n integers. Print how many different values the array contains.
Sample Input:
N: 8
Numbers: 3 1 4 1 5 3 9 4
Sample Output: Distinct values: 5*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
srand(time(0));
int n, i,j, key, count = 0;
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

for(i =0; i< n; i++){
	key = arr[i];
	for(j = 0; j < n; j++){
		if (arr[j] != key)	count++;
		}
}
printf("Distinct : %d ", count);

	return 0;
}