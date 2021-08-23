/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochoumou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 12:19:11 by ochoumou          #+#    #+#             */
/*   Updated: 2021/06/24 12:37:02 by ochoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	chart[3];

	chart[0] = '0';
	while (chart[0] <= '7')
	{
		chart[1] = chart[0] + 1;
		while (chart[1] <= '8')
		{
			chart[2] = chart[1] + 1;
			while (chart[2] <= '9')
			{
				write(1, &chart[0], 1);
				write(1, &chart[1], 1);
				write(1, &chart[2], 1);
				if (!(chart[0] == '7' && chart[1] == '8' && chart[2] == '9'))
				{
					write(1, ",", 1);
					write(1, " ", 1);
				}
				chart[2]++;
			}
			chart[1]++;
		}
		chart[0]++;
	}
}
