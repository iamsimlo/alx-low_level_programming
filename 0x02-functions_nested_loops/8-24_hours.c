#include "main.h"
/**
* jack_bauer - print 24 hours
* Return: Always 0.
*/

void jack_bauer(void)
{
	int h, hr, m, mn;

	for (h = 48; h <= 50; h++)
	{
		for (hr = 48; hr <= 57; hr++)
		{
			for (m = 48; m <= 53; m++)
			{
				for (mn = 48; mn <= 57; mn++)
				{
					if (h == 50 && hr > 51)
					{
						break;
					}
					else
					{
						_putchar(h);
						_putchar(hr);
						_putchar(':');
						_putchar(m);
						_putchar(mn);
						_putchar('\n');
					}
				}
			}
		}
	}
}
