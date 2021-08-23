/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochoumou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 12:59:58 by ochoumou          #+#    #+#             */
/*   Updated: 2021/06/27 16:09:43 by ochoumou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>


void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int j;
	j = size;
	while (j > 0){
	i = 0;
		while (i < (size - 1))
		{
			if (!(tab[i] < tab[i + 1]))
			{
				ft_swap(&tab[i], &tab[i + 1]);
			}
			i++;
		}
	}
}

int main(){
	int arr[4] = {3,8,0,9};
	ft_sort_int_tab(arr,4);
	int i = 0;
	while (i < 4){
		printf("%d\t",arr[i]);
		i++;
	}
	return 0;
}
