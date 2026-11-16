#include<stdio.h>
int main(){
int n,i,j,spCount;
printf("N: ");
scanf("%d",&n );
spCount = n-1;
for(i =1; i<=n; i++){

	for(j=0; j<i; j++){
		printf("*");
}
printf("\n");
}
return 0;
}
