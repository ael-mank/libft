int	ft_isprint(int character)
{
	if (character > 31 && character < 127)
		return (1);
	return (0);
}
