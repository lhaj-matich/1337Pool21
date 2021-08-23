/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochoumou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 18:15:22 by ochoumou          #+#    #+#             */
/*   Updated: 2021/07/05 16:21:00 by ochoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_phex(int nb, char *hex)
{
	int	i;

	i = nb;
	if (nb > 16)
	{
		i = hex[i] / 16;
		ft_putchar(hex[i]);
		i = hex[i] % 16;
		ft_putchar(hex[i]);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(hex[i]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 0 && str[i] <= 31)
		{
			ft_putchar('\\');
			ft_phex(str[i] - 0, "0123456789abcdef");
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}
