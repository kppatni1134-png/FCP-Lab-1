#include <stdio.h>
#include <math.h>

int main() {
	int num;
    for (num = 1; num <= 10000; num++){
        int sum = 0;
        int count = 0;
        int temp = num;

        // count the digits
        while (temp != 0) {
            count++;
            temp /= 10;
        }

        temp = num;

        // calculates the sum of powers
        while (temp != 0) {
            int digit = temp % 10;
            sum += (int)pow(digit, count);
            temp /= 10;
        }

        if (sum == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}
