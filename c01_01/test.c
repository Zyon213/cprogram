/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyohann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 21:50:27 by yoyohann          #+#    #+#             */
/*   Updated: 2021/08/11 22:08:45 by yoyohann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_str(char *str)
{
	int ind;

	ind = 0;
	while(str[ind] != '\0')
	{
		ft_putchar(str[ind]);
		ind++;
	}
}

int		main()
{
	char name[] = "Hello world";
	ft_str(name);
	return (0);
}
