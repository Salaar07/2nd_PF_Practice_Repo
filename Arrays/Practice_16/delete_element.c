/* Task 2: Input n (n <= 100) and then n integers, then a position p (0 <= p < n). Delete the element stored at
position p by shifting all later elements one place to the left, and print the array.
Sample Input:
N: 6
Numbers: 7 2 9 4 5 1
Position: 2
Sample Output: 7 2 4 5 1*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
srand(time(0));
int n,i,x;
do{		//Block to input within constraints
   printf("N: ");
   scanf("%d",&n );
}while(n <= 0 || n > 100);
int arr[n];//block to generate array
for(i =0; i< n; i++){
	arr[i] = rand()%10 + 1;
}
printf("Numbers: ");//Block to print array
for(i =0; i< n; i++){
	printf("%d ", arr[i]);
}
printf("\n");
printf("P:");
scanf("%d", &x);
for(i = x; i< n-1; i++){
		arr[i] = arr[i+1];
}
n--;
arr[n];
printf("Numbers: ");//Block to print array
for(i =0; i< n; i++){
	printf("%d ", arr[i]);
}
return 0;
}

