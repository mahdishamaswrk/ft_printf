/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamas <mchamas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:40:23 by mchamas           #+#    #+#             */
/*   Updated: 2025/06/16 20:29:45 by mchamas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned int n, char *base)
{
	int	len;

	len = 0;
	if (n >= 16)
		len += ft_putnbr_base(n / 16, base);
	len += write(1, &base[n % 16], 1);
	return (len);
}
