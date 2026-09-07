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