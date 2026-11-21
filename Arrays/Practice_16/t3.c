/* Task 3: Input n (n <= 100) and then n integers, then a value x. Remove only the first occurrence of x by shifting
the later elements to the left, and print the array. If x is not in the array, print the array unchanged.
Sample Input:
N: 7
Numbers: 4 2 7 2 9 2 5
X: 2
Sample Output: 4 7 2 9 2 5*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
#define found -1
srand(time(0));
int n,i,x;
do{		//Block to input within constraints
   printf("N: ");
   scanf("%d",&n );
}while(n < 0 || n > 100);
int arr[n];//block to generate array
for(i =0; i< n; i++){
	arr[i] = rand()%10 + 1;
}
printf("Numbers: ");//Block to print array
for(i =0; i< n; i++){
	printf("%d ", arr[i]);
}
printf("\n");
printf("X:");
scanf("%d", &x);
for(i = 0; i< n-1; i++){
		if (arr[i] == x)
		break;
}
for( ; i< n-1; i++){
	arr[i] = arr[i+1];		
}
n--;
arr[n];
printf("Numbers: ");//Block to print array
for(i =0; i< n; i++){
	printf("%d ", arr[i]);
}
}

