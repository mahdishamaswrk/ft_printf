/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamas <mchamas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 19:37:27 by mchamas           #+#    #+#             */
/*   Updated: 2025/06/18 16:05:56 by mchamas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int		len;
	char	c;

	len = 0;
	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	if (n < 0)
	{
		len += write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
		len += ft_putnbr(n / 10);
	c = n % 10 + '0';
	len += write(1, &c, 1);
	return (len);
}

int	ft_put_unbr(unsigned int n)
{
	int		len;
	char	c;

	len = 0;
	if (n >= 10)
		len += ft_put_unbr(n / 10);
	c = n % 10 + '0';
	len += write(1, &c, 1);
	return (len);
}

int	ft_putptr(void *ptr)
{
	uintptr_t	add;
	char		*hex;
	char		buffer[20];
	int			i;
	int			len;

	if (!ptr)
		return (write(1, "(nil)", 5));
	hex = "0123456789abcdef";
	i = 0;
	len = 0;
	add = (uintptr_t)ptr;
	len += write(1, "0x", 2);
	while (add)
	{
		buffer[i++] = hex[add % 16];
		add /= 16;
	}
	while (i--)
		len += write(1, &buffer[i], 1);
	return (len);
}
