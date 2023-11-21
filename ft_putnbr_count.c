/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:37:32 by tcampbel          #+#    #+#             */
/*   Updated: 2023/11/21 13:17:32 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	digit_counter(long nb)
{
	int	count;

	count = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		count++;
		nb *= -1;
	}
	while (nb > 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

int	ft_putnbr_count(long nb)
{
	int		count;
	char	*dict;

	count = 0;
	dict = "0123456789";
	if (nb < 0)
	{
		ft_putchar_count('-');
		ft_putnbr_count(-nb);
	}
	else if (nb < 10)
		ft_putchar_count(dict[nb]);
	else
	{
		ft_putnbr_count(nb / 10);
		ft_putnbr_count(nb % 10);
	}
	return (digit_counter(nb));
}
