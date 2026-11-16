#include <stdio.h>
#include <stdlib.h>
void printSpaces(int c){
	for(int i =1 ; i<= c; i++)
		printf (" ");
}
void printStars(int c){
	for(int i =1 ; i<=c; i++)
		printf ("*");
}
void invertedPyramid(int rows){
	int i, stCnt = (rows*2)-1;
	for (i=1 ;i<=rows;i++){
		printSpaces(i-1);
		printStars(stCnt);
		printf("\n");
		stCnt-=2;
	}
}
	void pyramid(int rows){
	int i, stCnt = 1;
	for (i=1 ;i<=rows;i++){
		printSpaces(rows-i);
		printStars(stCnt);
		printf("\n");
		stCnt+=2;
}	}
	void diamond(){
			int rows;
			printf("Enter rows for Diamond: ");
			scanf("%d", &rows);
			int upper = rows/2;
			int lower = rows/2;
			pyramid(upper);
			invertedPyramid(lower);
		}
	void leftTriangle(char c, int rows){
		int i;
		for(i=1; i<=rows; i++){
			for(int j=1; j<=i; j++)
				printf("%c", c);
		printf("\n");
	}
	}
void W(){
	
}
int main(){
		
		return 0;
}
