/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyohann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 11:30:00 by yoyohann          #+#    #+#             */
/*   Updated: 2021/08/11 21:00:35 by yoyohann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int temp;
	int counter;
	int mid;

	mid = size / 2;
	counter = 1;
	while (counter <= mid)
	{
		temp = *(tab + counter);
		*(tab + counter) = *(tab + size);
		*(tab + size) = temp;
		size--;
		counter++;
	}
}
