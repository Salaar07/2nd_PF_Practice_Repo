/* Q1: Reverse an Integer: Write a function that reverses an integer. You must reverse an original
number not a copy. You may use a 2nd variable, but reversal should be done in original number.
Sample Input:
24041
Sample Output:
14042
*/
#include<stdio.h>
int reverse(int *n){
	int rev = 0;
	while(*n != 0){
		rev = rev*10 + *n%10;
		*n /= 10;
	}
	*n = rev;
	return *n;
}
int main(){
int num,i;
printf("N: ");
scanf("%d",&num );
reverse(&num);
printf("%d\n", num);

return 0;
}
