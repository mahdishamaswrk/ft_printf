/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamas <mchamas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 15:51:25 by mchamas           #+#    #+#             */
/*   Updated: 2025/06/16 21:58:35 by mchamas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put(va_list	args, const char *str, int i)
{
	int	c;

	c = 0;
	if (str[i] == 'c')
		c += ft_putchar(va_arg(args, int));
	else if (str[i] == 's')
		c += ft_putstr(va_arg(args, char *));
	else if (str[i] == 'p')
		c += ft_putptr((void *)(uintptr_t)va_arg(args, unsigned long));
	else if (str[i] == 'd' || str[i] == 'i')
		c += ft_putnbr(va_arg(args, int));
	else if (str[i] == 'u')
		c += ft_put_unbr(va_arg(args, unsigned int));
	else if (str[i] == 'x')
		c += ft_putnbr_base(va_arg(args, unsigned int), "0123456789abcdef");
	else if (str[i] == 'X')
		c += ft_putnbr_base(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (str[i] == '%')
		c += ft_putchar('%');
	return (c);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		c;

	c = 0;
	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (str[i + 1])
			{
				i++;
				c += ft_put(args, str, i);
			}
		}
		else
			c += ft_putchar(str[i]);
		i++;
	}
	va_end (args);
	return (c);
}

// int	main(void)
//  {
// 	ft_printf("%");
//  }
