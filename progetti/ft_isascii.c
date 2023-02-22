int ft_isascii(int a)
{
	int x;

	x = 0;
	if( a >= 0 && a <= 127)
	{
		x = 1;
	}
	return x;
}
