#include <stdio.h>

int main(){
	
	int basic,hra,da,gross;
	
	printf("Enter the basic selery");
	
	scanf("%d",&basic);
	
	hra =0.2*basic;
	da = 0.8*basic;
	
	gross = basic + hra + da;
	
	printf("Gross selery = %d",gross);
	
}
