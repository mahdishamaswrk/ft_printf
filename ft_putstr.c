/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamas <mchamas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 19:27:20 by mchamas           #+#    #+#             */
/*   Updated: 2025/06/16 20:41:11 by mchamas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;

	if (!s)
		return (write (1, "(null)", 6));
	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	void	*s;

// 	s = malloc(4);
// 	s = memcpy(s, "abc", 3);
// 	ft_putstr_fd(s, 1);
// 	free(s);
// }
