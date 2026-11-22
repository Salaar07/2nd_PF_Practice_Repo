/*Task 5: Input n (n <= 100) and then n integers, then a position p (0 <= p <= n) and a value v. Insert v at position
p by first shifting the elements from position p onward one place to the right, and print the array.
Sample Input:
N: 5
Numbers: 8 6 1 9 4
Position: 2, Value: 7
Sample Output: 8 6 7 1 9 4*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
#define found -1
srand(time(0));
int n,i,p,v, temp;
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
printf("Position:");
scanf("%d", &p);
printf("Value:");
scanf("%d", &v);
n++;
arr[n];
for(i = n-1; i>=p ; i--){
		arr[i+1]  = arr[i];
		arr[i] = temp;
}
/*for( ; i< n-1; i++){
	arr[i] = arr[i+1];		
}*/
arr[p] = v;

printf("Numbers: ");//Block to print array
for(i =0; i< n; i++){
	printf("%d ", arr[i]);
}
}

