/*Task 1: Input a number of seconds. Convert it into hours, 
minutes and seconds and print it in the form HH:MM:SS,with every part shown using two digits.
Sample Input: Seconds: 3725
Sample Output: 01:02:05
Explanation: Time starts from 00:00:00 or 12:00:00 AM at midnight.
 One hour has 60x60=3600 seconds.
3725 - 3600 = 125 Seconds, therefore the time is 1 AM and 125 seconds.
 Now each minutes has 60 seconds,
therefore 125 seconds means 2 minutes and 5 seconds,
 therefore, the time is 1 hour 2 minutes and 5 seconds.*/
#include<stdio.h>
int main(){
int sec,hr,min,remSec;
printf("Seconds: ");
scanf("%d",&sec );
hr = sec/3600;
min = (sec%3600)/60;
remSec = (sec%3600) % 60;
printf("%02d:%02d:%02d\n", hr,min,remSec);
return 0;
}
