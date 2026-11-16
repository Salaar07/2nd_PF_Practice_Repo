/**/
#include<stdio.h>
int main(){
int n,i;
printf("N: ");
scanf("%d",&n );
int x[n];

for(i =0; i< n; i++){
	scanf("%d", &x[i]);
}
int j = 0;
int k;
for(i=n-1; j < i; i--){
	k = x[j];
	x[j] = x[i];
	x[i] = k;
	j++;
	
}
for(i =0; i< n; i++)
	printf("%d ", x[i]);

return 0;
}