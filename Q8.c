#include <stdio.h>

int main()
{
	int second = 31556925,minut,hour,days;
	
	days = second/86400;

	int days_left = second%86400;

	hour = days_left/3600;

	int hour_left = days_left%3600;

	minut = hour_left/60;
	
	printf("%d : %d : %d",days,hour,minut);
}
