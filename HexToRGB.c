#include <stdio.h>

void convert(void)
{
	int r = 0;
	int g = 0;
	int b = 0;

	scanf_s("%2x%2x%2x", &r, &g, &b);
	while (getchar() != '\n');

	printf_s("%d, %d, %d\n", r, g, b);
}

int main(void)
{
	char y = 0;
	do
	{
		convert();
		printf_s("Again? (Y/N)\n");
		y = getchar();
	} while (y == 'y' || y == 'Y');
	return 0;
}
