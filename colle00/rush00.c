/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phmgagul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 12:08:05 by phmgagul          #+#    #+#             */
/*   Updated: 2020/07/15 12:21:49 by phmgagul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"
void	continue_checking(int x, int y, int size1, int size2)
{
	if(y == 1)//first row
	{
		if(x == 1)
			ft_putchar('/');
		else if(x == size1)
			ft_putchar('\\');
		else 
			ft_putchar('*');
	}
	else if(y == size2)// last row
	{
		if(x == 1)
			ft_putchar('\\');
		else if(x == size1)
			ft_putchar('/');
		else
			ft_putchar('*');
	}
	else if(x == 1 || x == size1) 
		ft_putchar('*');
	else
		ft_putchar(' ');
}
void	rush(int size1, int size2)
{
	int x;
	int y;
	y = 1;
	x = 1;
	while(y <= size2)
	{ 
		x = 1;
		while(x <= size1)
		{
			continue_checking(x , y, size1, size2);
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}

