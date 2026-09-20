#include <stdio.h>

int main(){
	char ch;
	
	scanf("%c",&ch);
	
	if(ch >= '1' && ch <= '9'){
		printf("Digit\n");
	}else if(ch >= 'A' && ch <= 'Z'){
		printf("Capital Letter\n");
	}else if(ch >= 'a' && ch <= 'z'){
		printf("Small letter\n");
	}else{
		printf("special charecter\n");
	}
	
	return main();
	
}
