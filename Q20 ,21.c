#include <stdio.h>

int  main(){
	int n,a,b;
	
	printf("a and b :");
	scanf("%d%d",&a,&b);
	
	printf("1 for addtion\n");
	printf("2 for substrtion\n");
	printf("3 for multiplication\n");
	printf("4 for dividtion\n");
	
	scanf("%d",&n);
	
	switch(n){
		case 1: printf("%d + %d = %d",a,b,a+b);
				break;
		case 2: printf("%d - %d = %d",a,b,a-b);
				break;
		case 3: printf("%d x %d = %d",a,b,a*b);
				break;
		case 4: printf("%d / %d = %d",a,b,a/b);
				break;
		default : printf("Invalid Number"); 
	}
	
}
