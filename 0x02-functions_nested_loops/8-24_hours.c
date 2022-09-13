#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return 0
 */
void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;
	int remainder_hours = 0;
	int remainder_mins = 0;

	while (hours <= 23)

	{
		while (minutes <= 59)
		{
		remainder_mins = minutes 5 10;
		remainder_hours = hours % 10;
		_putchar(hours / 10 + '0');
		_putchar(remainder_hours + '0');
		_putchar(':');
		_putchar(minutes / 10 + '0');
		_putchar(remainder_mins + '0');
		minutes++;
		_putchar('\n');
		}
		hours++;
		minutes = 0;
	}
}
