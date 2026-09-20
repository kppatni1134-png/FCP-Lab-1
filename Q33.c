#include <stdio.h>

int main(){
	int a,b,c,min,max,mid;
	
	scanf("%d %d %d",&a,&b,&c);
	
	if(a > b && a > c){
		max = a;
	}else if(b > a && b > c){
		max = b;
	}else{
		max = c;
	}
	
	if(a < b && a < c){
		min = a;
	}else if(b < a && b < c){
		min = b;
	}else{
		min = c;
	}
	
	if(a != max && a != min){
		mid = a;
	}else if(b != max && b != min){
		mid = b;
	}else{
		mid = c;
	}
	
	printf("Mxaimum : %d\n",max);
	printf("Middle : %d\n",mid);
	printf("Minimun : %d\n",min);
}
