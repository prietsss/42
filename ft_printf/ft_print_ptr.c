#include "ft_printf.h"

static int	ft_put_ptr(unsigned long long n)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += ft_put_ptr(n / 16);
	count += ft_print_char("0123456789abcdef"[n % 16]);
	return (count);
}

int	ft_print_ptr(void *ptr)
{
	int	count;

	count = 0;
	if (!ptr)
		return (write(1, "(nil)", 5));
	count += write(1, "0x", 2);
	count += ft_put_ptr((unsigned long long)ptr);
	return (count);
}