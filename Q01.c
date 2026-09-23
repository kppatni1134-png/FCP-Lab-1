#include <stdio.h>

int main()
{
	float p,r,t,i = 0;
	
	printf("add the principle amount");
	scanf("%f",&p);
	
	printf("add the rate of intrest");
	scanf("%f",&r);
	
	printf("add the time in years");
	scanf("%f",&t);
	
	i = p*r*t/100;
	
	printf("intrest %f", i);
}
