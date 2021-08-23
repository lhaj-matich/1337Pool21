/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochoumou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 16:28:01 by ochoumou          #+#    #+#             */
/*   Updated: 2021/07/14 17:59:01 by ochoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *dest, char *src)
{
	int	i;

	i = 0;
	while (dest[i] && src[i] && dest[i] == src[i])
	{
		i++;
	}
	return (dest[i] - src[i]);
}

void	ft_print_args(char *argsec, int argnum)
{
	int	i;

	i = 1;
	while (i < argnum)
	{
		ft_putstr(argsec[i]);
		ft_putchar('\n');
		i++;
	}
}

int	main(int argc, char **argv)
{
	char	*temp;
	int		i;
	int		j;

	i = 1;
	while (argc > i)
	{
		j = i + 1;
		while (argc > j)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				temp = argv[j];
				argv[j] = argv[i];
				argv[i] = temp;
			}
			j++;
		}
		i++;
	}
	ft_print_args(*argv, argc);
	return (0);
}
