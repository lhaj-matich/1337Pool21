/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochoumou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 15:38:33 by ochoumou          #+#    #+#             */
/*   Updated: 2021/06/30 15:39:24 by ochoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	count;

	i = 0;
	j = 0;
	count = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && count < nb)
	{
		dest[i] = src[j];
		j++;
		i++;
		count++;
	}
	dest[i] = '\0';
	return (dest);
}
