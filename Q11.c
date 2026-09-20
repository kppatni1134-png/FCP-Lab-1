#include <stdio.h>

int main(){
	int H,M,S;
	int sec;
	
	scanf("%d%d%d",&H,&M,&S);
	
	sec = H*3600 + M*60 + S;
	
	printf("%d",sec);
}
