#include <stdio.h>

int main(void)
{
	int i;

	for (i = 48; i <= 58; ++i)
	{
		putchar(i + '0');
	}

	putchar('\n');

	return (0);
}

