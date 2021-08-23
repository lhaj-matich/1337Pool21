/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochoumou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 12:30:36 by ochoumou          #+#    #+#             */
/*   Updated: 2021/06/27 12:31:45 by ochoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	holder;

	i = 0;
	while (i < (size - 1))
	{
		holder = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = holder;
		i++;
		size--;
	}
}
