/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochoumou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 17:44:04 by ochoumou          #+#    #+#             */
/*   Updated: 2021/07/08 12:37:22 by ochoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	is_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f'
		|| c == '\r' || c == ' ' || c == '\\')
		return (1);
	return (0);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
	{
		return (0);
	}
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j] || base[j] == '-' || base[j] == '+'
				|| is_space(base[j]) || (base[j] >= 0 && base[j] <= 31))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_find_base(char *base, char c)
{
	int	count;

	count = 0;
	while (base[count] != '\0')
	{
		if (base[count] == c)
			return (count);
		count++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	result;
	int	i;

	sign = 1;
	result = 0;
	i = 0;
	while (is_space(str[i]))
		i++;
	while ((str[i] != '\0') && ((str[i] == '+') || (str[i] == '-')))
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	if (!ft_check_base(base))
		return (0);
	while (str[i] != '\0' && !is_space(str[i])
		&& (ft_find_base(base, str[i]) != -1))
	{
		result = ft_strlen(base) * result + ft_find_base(base, str[i]);
		i++;
	}
	return (result * sign);
}
