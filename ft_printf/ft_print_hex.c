/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alepriet <alepriet@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 00:28:26 by alepriet          #+#    #+#             */
/*   Updated: 2026/09/08 00:28:27 by alepriet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int n, char format)
{
	int		count;
	char	*base;

	count = 0;
	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (n >= 16)
		count += ft_print_hex(n / 16, format);
	count += ft_print_char(base[n % 16]);
	return (count);
}