/*Task 2: Input the radius and the height of a cylinder (use 3.14 for pi). Print its volume and its surface area, where
surface area = 2 * pi * r * (r + h), each rounded to two decimal places.
Sample Input:
Radius: 3
Height: 10
Sample Output:
Volume: 282.60
Surface Area: 244.92*/
#include<stdio.h>
int main(){
int rad,h;
float area, vol;
float pi = 3.14;
printf("Radius, Height of Cylinder: ");
scanf("%d%d",&rad,&h);
area = 2*pi*rad*(rad+h)*1.0;
vol = pi*(rad*rad)*h*1.0;
printf ("Volume: %.2f\nSurface Area: %.2f", vol, area);
return 0;
}
