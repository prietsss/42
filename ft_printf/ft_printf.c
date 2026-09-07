/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alepriet <alepriet@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 00:28:53 by alepriet          #+#    #+#             */
/*   Updated: 2026/09/08 00:29:00 by alepriet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_parse_format(char specifier, va_list *args)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += ft_print_char(va_arg(*args, int));
	else if (specifier == 's')
		count += ft_print_str(va_arg(*args, char *));
	else if (specifier == 'p')
		count += ft_print_ptr(va_arg(*args, void *));
	else if (specifier == 'd' || specifier == 'i')
		count += ft_print_nbr(va_arg(*args, int));
	else if (specifier == 'u')
		count += ft_print_unsigned(va_arg(*args, unsigned int));
	else if (specifier == 'x' || specifier == 'X')
		count += ft_print_hex(va_arg(*args, unsigned int), specifier);
	else if (specifier == '%')
		count += ft_print_char('%');
	return (count);
}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		total_len;
	int		i;

	if (!format)
		return (-1);
	total_len = 0;
	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			total_len += ft_parse_format(format[i], &args);
		}
		else
			total_len += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (total_len);
}