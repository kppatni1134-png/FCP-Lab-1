#include <stdio.h>
#include <math.h>

int main(){
	int a,b,c;
	float s,A,B;
	
	scanf("%d %d %d",&a,&b,&c);
	
	s = (a+b+c)/2;
	
	B = s*(s-a)*(s-b)*(s-c);
	
	A = sqrt(B);
	
	printf("Area : %f",A);
}
