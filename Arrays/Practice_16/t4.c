/* Task 4: Input n (n <= 100) and then n integers, then two values x and y. Replace every element equal to x with y
and print the array.
Sample Input:
N: 5
Numbers: 3 5 3 8 3
X: 3, Y: 0
Sample Output: 0 5 0 8 0*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
#define found -1
srand(time(0));
int n,i,x,y;
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
printf("Y:");
scanf("%d", &y);
for(i = 0; i< n; i++){
		if (arr[i] == x)
		arr[i]  = y;
}
/*for( ; i< n-1; i++){
	arr[i] = arr[i+1];		
}*/
arr[n];
printf("Numbers: ");//Block to print array
for(i =0; i< n; i++){
	printf("%d ", arr[i]);
}
}

