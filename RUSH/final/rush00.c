void	ft_putchar(char c);

void	draw_line(int len, char first_char, char middle_char, char last_char)
{
	ft_putchar(first_char);
	len--;
	while ((len - 1) > 0)
	{
		ft_putchar(middle_char);
		len--;
	}
	if (len > 0)
	{
		ft_putchar(last_char);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		draw_line(x, 'o', '-', 'o');
		y--;
		while (y > 1)
		{
			draw_line(x, '|', ' ', '|');
			y--;
		}
		if (y > 0)
		{
			draw_line(x, 'o', '-', 'o');
		}
	}
}
