int	ft_isalpha(int c)
{
	int	res;

	res = 0;
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		res += 1;
	return (res);
}
