#include<stdio.h>
int main(){
int i, j,n;
int num = 1;
scanf("%d", &n);
for (i=0;i<n;i++){
	for(j=0; j< i+1; j++){
		printf("%d ", num);		
		num++;
	}
	printf("\n");		
}


return 0;
}
