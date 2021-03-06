/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochoumou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 17:44:16 by ochoumou          #+#    #+#             */
/*   Updated: 2021/07/08 16:54:17 by ochoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	is_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f'
		|| c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	ft_check_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(str) < 2 || str[i] == '\0')
	{
		return (0);
	}
	while (str[i] != '\0')
	{
		j = i + 1;
		while (str[j])
		{
			if (str[j] == str[i] || str[j] == '-' || str[j] == '+'
				|| is_space(str[j]) || (str[j] >= 0 && str[j] <= 31))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	n;
	int		base_size;

	n = nbr;
	base_size = ft_strlen(base);
	if (ft_check_base(base))
	{
		if (n < 0)
		{
			ft_putchar('-');
			n = n * -1;
		}
		if (n >= base_size)
		{
			ft_putnbr_base((n / base_size), base);
			ft_putnbr_base((n % base_size), base);
		}
		else
			ft_putchar(base[n]);
	}
}
