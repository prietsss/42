/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alepriet <alepriet@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 00:28:48 by alepriet          #+#    #+#             */
/*   Updated: 2026/09/08 00:28:49 by alepriet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int n)
{
	int	count;

	count = 0;
	if (n > 9)
		count += ft_print_unsigned(n / 10);
	count += ft_print_char((n % 10) + '0');
	return (count);
}