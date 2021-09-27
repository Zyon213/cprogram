/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyohann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 09:55:19 by yoyohann          #+#    #+#             */
/*   Updated: 2021/08/11 21:40:31 by yoyohann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
int		main()
{
	int s[] = {6};
	int u[] = {3};
	int x;

	x = 0;
	while (s[x])
	{
		ft_swap(s[x],u[x]);
	}

	printf("%d",s[x]);
	return (0);
}

