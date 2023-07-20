/**
 * _isdigit - determine if digit
 *
 * @c: character to determine
 *
 * Return: returns 1 if `c` is lowercase
 *		otherwise always 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
