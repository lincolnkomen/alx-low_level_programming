/**
 * _abs - return abs value
 * @n : number to check
 * Return:0 or 1
 */
int _abs(int);

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
