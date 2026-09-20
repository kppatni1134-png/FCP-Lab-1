#include <stdio.h>

int main(){
	int per;
	
	printf("enter percenteage \n");
	
	scanf("%d",&per);
	
	if(per > 80 && per <= 100){
		printf("A grade");
	}else
	if(per > 70 && per <= 80){
		printf("A grade");
	}else
	if(per > 60 && per <= 70){
		printf("B grade");
	}else if(per > 50 && per <= 60){
		printf("C grade");
	}else if(per > 40 && per <= 50){
		printf("D grade");
	}
}
