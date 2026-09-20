#include <stdio.h>

int main(){
	int a,b,sum = 1,i;
	
	printf("Enter the base : ");
	scanf("%d",&a);
	
	printf("Enter the power : ");
	scanf("%d",&b);
	
	for(i = 0;i < b;i++){
		sum *= a;
	}
	
	printf("%d",sum);
	
}
