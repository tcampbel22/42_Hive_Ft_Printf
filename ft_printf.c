/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:13:37 by tcampbel          #+#    #+#             */
/*   Updated: 2023/11/17 15:59:08 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_printf(const char *str, ...)
{
	int	arg_count;
	va_list	ap;

	arg_count = 0;
	va_start(ap, str);
	while (*str)
	{
		if (*str == '%')
			arg_count += str_handler(*str, ap);
		else
			write(1, str, 1);
		str++;
	}
	va_end(ap);
	return (0);
}
