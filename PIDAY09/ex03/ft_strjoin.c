/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochoumou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 18:30:55 by ochoumou          #+#    #+#             */
/*   Updated: 2021/07/13 18:30:56 by ochoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_calculate_size(int size, char **strs, char *sep)
{
	int	i;
	int	final_size;

	i = 0;
	final_size = 0;
	if (i >= size)
		return (0);
	while (i < size)
	{
		final_size += ft_strlen(strs[i]);
		i++;
	}
	final_size = final_size + ft_strlen(sep) * (size - 1);
	return (final_size + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*temp;
	int		i;

	if (size > 0)
	{
		i = 0;
		temp = malloc(sizeof(char) * ft_calculate_size(size, strs, sep));
		if (!temp)
			return (NULL);
		temp[0] = '\0';
		while (size > i)
		{
			temp = ft_strcat(temp, strs[i]);
			if ((size - 1) > i)
				temp = ft_strcat(temp, sep);
			i++;
		}
	}
	else
		temp = malloc(sizeof(char));
	return (temp);
}
