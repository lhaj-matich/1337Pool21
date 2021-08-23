/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochoumou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 18:47:13 by ochoumou          #+#    #+#             */
/*   Updated: 2021/07/11 14:00:28 by ochoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	save;
	int	k;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		save = i;
		k = i;
		while (str[k] == to_find[j] && to_find[j] != '\0' && str[k] != '\0')
		{
			k++;
			j++;
		}
		if (to_find[j] == '\0')
		{
			return (&str[save]);
		}
		i++;
	}
	return (0);
}

int main()
{
	char str1[] = "hello world";
	char str2[] = "r";
	printf("%s\n",ft_strstr(str1,str2));
	return 0;
}
