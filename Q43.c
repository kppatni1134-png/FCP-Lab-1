#include <stdio.h>

int main(){
	int sales,commision;
	
	printf("Enter the sales");
	scanf("%d",&sales);
	
	if(sales <= 500){
		commision = sales*15/100;
	}else
	if(sales > 500 && sales <= 2000){
		commision = (sales-500)*10/100 + 80;
	}else
	if(sales > 2000 && sales <= 5000){
		commision = (sales*12/100) + 185;
	}
	else{
		commision = sales*12.5/100;
	}
	printf("Commision : %d",commision);
}
