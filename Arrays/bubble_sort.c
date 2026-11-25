/* Task 7: Input n (n <= 100) and then n integers. Make a single pass over the array: compare every element with
the next one and swap them if the first is larger. Print the array after this one pass.
Sample Input:
N: 5
Numbers: 5 1 4 2 8
Sample Output: 1 4 2 5 8*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
#define found -1
srand(time(0));
int n,i,j, temp;
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
//largest = arr[0];
for(i = 1; i < n  ; i++){
		for(j=1; j < n; j++){
		if(arr[j-1] > arr[j]){ //Numbers: 10 5 9 1 9 2
		temp = arr[j-1];
		arr[j-1] = arr[j];
		arr[j] = temp;
		
	}
	}
}
printf("\nNumbers: ");//Block to print array
for(i =0; i< n; i++){
	printf("%d ", arr[i]); //Numbers: 1 2 5 9 9 10
}
}


