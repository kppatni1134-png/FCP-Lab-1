#include <stdio.h>

int main(){

    int num,sum = 0;

    printf("enter the number :");
    scanf("%d",&num);

    while(num > 0){
        int digit = num%10;
        sum += digit;
        num /= 10;
    }

    printf("sum of digit %d\n",sum);
    return main();
}
