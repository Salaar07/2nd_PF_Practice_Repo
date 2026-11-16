/*2. For the previous program, 
determine whether it is a palindrome. A number is a palindrome if it reads the same from left
to right and from right to left. Constraint: Do not use any extra variable to store the 
reversed number or individual digits. 
You may use the original number and expressions involving it.
Sample Input 1: 1221 Sample Output 1: Palindrome 
Sample Input 2: 4824 Sample Output 2: Not Palindrome */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand(time(0));
	int a = rand()%9000 + 1000;
	printf ("A: %d\n", a);
	if(a/1000 == a%10 && (a/100)%10 == (a/10)%10)	printf ("Palindrome");
	else 											printf ("Not a Palindrome");
	return 0;	
}