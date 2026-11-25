/* */
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void printArr(int arr[],int size){
	int i;
	for(i = 0; i <size; i++)
		printf("%d ", arr[i]);
	}
void scanArr(int arr[], int size){
	int i;
	for(i = 0; i <size; i++)
		scanf("%d", &arr[i]);
	}
void genArr(int arr[], int size){
	int i, arrr[size];
	for(i =0; i< size; i++)
	arr[i] = rand()%100 + 1;
}
void swap(int a, int b){
	a = a^b;
	b = b^a;
	a = a^b;
}
void InsertionSort(int arr[], size){
	int curr, prev, i, j;
	for(i = 1; i < size ; i++){
		curr = i;
		prev = i-1
		for(j = 0; j < size; j++){
			if(arr[prev] < arr[curr])
				swap(arr[curr], arr[prev]);
		}
		curr =  j;
	}
	
	
}

int main(){
#define N 100
srand(time(0));
int size,i,x;
 printf("N: ");
scanf("%d",&size );
int arr[N];
genArr(arr, size);
printArr(arr, size);
scanf("X: %d", &x);
InsertionSort(arr, size);
printArr(arr, size);
return 0;
}



