/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochoumou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 19:24:07 by ochoumou          #+#    #+#             */
/*   Updated: 2021/07/13 16:47:02 by ochoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*temp;
	int	range;
	int	i;

	if (min >= max)
	{
		temp = NULL;
		return (temp);
	}
	i = 0;
	range = max - min;
	temp = (int *)malloc(sizeof(int) * range);
	if (!temp)
		return (NULL);
	while (i < range)
	{
		temp[i] = min;
		i++;
		min++;
	}
	return (temp);
}
