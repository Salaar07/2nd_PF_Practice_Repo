/* */
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void printArr(arr, size){
	int i;
	for(i = 0; i <size; i++)
		printf("%d ", arr[i]);
	}
void scanArr(arr, size){
	int i;
	for(i = 0; i <size; i++)
		scanf("%d", &arr[i]);
	}
void genArr(size){
	int i, arrr[size];
	for(i =0; i< size; i++){
	arr[i] = rand()%100 + 1;
}
int main(){
srand(time(0));
int size,i,x;
do{
   printf("N: ");
   scanf("%d",&size );
}while(size < 0 || size > 100);
int arr[size];//block to generate array
genArr(7);
printArr(arr, size);
scanf("X: %d", &x);
}


