#include<stdio.h>
int main(){
int i, j,n;
scanf("%d", &n);
char alp = 'A';
for (i=0;i<n;i++){
	for(j=i+1; j>0; j--){
		printf("%d:%c ", j,alp);
		alp++;		
}
	printf("\n");		
}


return 0;
}
