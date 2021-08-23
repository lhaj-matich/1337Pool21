/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochoumou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 18:21:25 by ochoumou          #+#    #+#             */
/*   Updated: 2021/07/08 17:37:48 by ochoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	factorial;

	factorial = 1;
	if (nb < 0)
		return (0);
	while (nb)
	{
		factorial *= nb;
		nb--;
	}
	return (factorial);
}
