/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alepriet <alepriet@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 00:28:31 by alepriet          #+#    #+#             */
/*   Updated: 2026/09/08 00:28:32 by alepriet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_nbr(int n)
{
	int		count;
	long	num;

	count = 0;
	num = n;
	if (num < 0)
	{
		count += ft_print_char('-');
		num = -num;
	}
	if (num > 9)
		count += ft_print_nbr(num / 10);
	count += ft_print_char((num % 10) + '0');
	return (count);
}