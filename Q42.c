#include <stdio.h>

int main(){
	
	float sum;
	float f = 1;
	int n,i,j;
	
	scanf("%d",&n);
	
	for(j = 1;j <= n;j++){
		for(i = 1;i <= j;i++){
			f *= i;	
	}
		printf("%d/%d! + ",j,j);
		sum += j/f;
	}
	
	printf("= %f",sum);
	
}
