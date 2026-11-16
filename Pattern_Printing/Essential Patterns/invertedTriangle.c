#include<stdio.h>
int main(){
int n,i,j;
printf("N: ");
scanf("%d",&n);
for(i=0;i<n;i++){
	for(j=0;j<i; j++){
		printf(" ");
}
	for(j=0;j<n-1;j++){
		printf("%d", i+1);
	}
printf("\n");
}
return 0;
}
