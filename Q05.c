#include <stdio.h>

int main()
{
	int n1 = 10,n2 = 20,n3;
	
	n3 = n1;
	n1 = n2;
	n2 = n3;
	
	printf("%d \n",n1);
	printf("%d",n2);
}
