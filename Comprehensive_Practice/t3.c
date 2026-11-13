/* Task 3: Input the marks in mid-term and sessional, out of 35 and 25. Next, input the required grade points that are
0 to 4.0 as per available standard grade points for each course. Find the minimum marks required in finals to get
the required grade.
Sample Input:
Mid: 25
Sessional: 18
Grade: 3.7
Sample Input:
Mid: 25
Sessional: 18
Grade: 3.7
Sample Output: Minimum Marks in Finals: 37
*/
#include<stdio.h>
int MinFinalMarks(){
	int mid,sess,final;

float gpa;
printf("Midterm: ");//25
scanf("%d",&mid );
printf("Sessional: ");
scanf("%d",&sess );//18
printf("GPA: ");
scanf("%f",&gpa );//3.7
if	   (gpa <= 4.00 && gpa > 3.70)       final = 85 - (mid+sess);
else if(gpa <= 3.70 && gpa > 3.30)  final = 80 - (mid+sess);// mid + sess = 25 + 18 = 43; 80-43 = 37;
else if(gpa <= 3.30 && gpa > 3.00)  final = 75 - (mid+sess);
else if(gpa <= 3.00 && gpa > 2.70)  final = 70 - (mid+sess);
else if(gpa <= 2.70 && gpa > 2.30)  final = 65 - (mid+sess);
else if(gpa <= 2.30 && gpa > 2.00)  final = 61 - (mid+sess);
else if(gpa <= 2.00 && gpa > 1.70)  final = 58 - (mid+sess);
else if(gpa <= 1.70 && gpa > 1.00)  final = 55 - (mid+sess);
else if(gpa >= 1.00 && gpa < 1.70)  final = 50 - (mid+sess);
  else 
    printf("Invalid GPA");
    return final;
}
int main(){

    
    printf("Entered GPA: %.2f\n", gpa);
	printf("Current marks: %d\n", mid+sess);
    printf("Marks Req in Final: %d", final);
   return 0; 
}
