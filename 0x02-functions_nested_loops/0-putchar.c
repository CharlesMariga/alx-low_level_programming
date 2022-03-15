/**
 * main - prints to console
 *
 * Desription: prints _putchar string to the console
 *
 * Return: Always 0 (Success)
 */
int _putchar(char c);

int main(void)
{
	char text[] = "_putchar";
	int i = 0;

	while (text[i] != 0)
	{
		_putchar(text[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
