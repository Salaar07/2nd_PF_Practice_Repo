/* Task 4: Input a month (1 to 12) and a year and print the number of days in that month. A year is a leap year if it is
divisible by 400, or divisible by 4 but not by 100. For a month outside 1 to 12 print Invalid month.
Sample Input:
Month: 2
Year: 2028
Sample Output: 29*/
#include<stdio.h>
int main(){
int month,year,j;
printf("Year: ");
scanf("%d",&year);
printf("Month(1-12): ");
scanf("%d",&month );
if (month==1)		printf("30");
if(year%4 == 0 && year%100 !=0){
	if (month == 2) printf("29");
}
if (month==2)		printf("28");		
if (month==3)		printf("31");
if (month==4)		printf("30");
if (month==5)		printf("31");
if (month==6)		printf("30");
if (month==7)		printf("31");
if (month==8)		printf("31");
if (month==9)		printf("30");
if (month==10)		printf("31");
if (month==11)		printf("30");
if (month==12)		printf("31");
else 				printf("invalid");
return 0;
}
