#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int main(void)
{
    int orig_ret;
	int ft_ret;

	printf("[1] Caracteres y Strings\n");
	orig_ret = printf("Orig: %c, %s, %s\n", 'A', "Hola 42", (char *)NULL);
	ft_ret = ft_printf("Mine: %c, %s, %s\n", 'A', "Hola 42", (char *)NULL);
	printf("Retornos -> Orig: %d | Mine: %d\n\n", orig_ret, ft_ret);

	printf("[2] Punteros\n");
	int a = 42;
	orig_ret = printf("Orig: %p, %p\n", &a, NULL);
	ft_ret = ft_printf("Mine: %p, %p\n", &a, NULL);
	printf("Retornos -> Orig: %d | Mine: %d\n\n", orig_ret, ft_ret);

	printf("[3] Decimales (d, i)\n");
	orig_ret = printf("Orig: %d, %i, %d, %d\n", 0, -42, INT_MAX, INT_MIN);
	ft_ret = ft_printf("Mine: %d, %i, %d, %d\n", 0, -42, INT_MAX, INT_MIN);
	printf("Retornos -> Orig: %d | Mine: %d\n\n", orig_ret, ft_ret);

	printf("[4] Unsigned (u)\n");
	orig_ret = printf("Orig: %u, %u\n", 0, UINT_MAX);
	ft_ret = ft_printf("Mine: %u, %u\n", 0, UINT_MAX);
	printf("Retornos -> Orig: %d | Mine: %d\n\n", orig_ret, ft_ret);

	printf("[5] Hexadecimales (x, X)\n");
	orig_ret = printf("Orig: %x, %X, %x, %X\n", 0, 0, 255, 4294967295U);
	ft_ret = ft_printf("Mine: %x, %X, %x, %X\n", 0, 0, 255, 4294967295U);
	printf("Retornos -> Orig: %d | Mine: %d\n\n", orig_ret, ft_ret);

	printf("[6] Porcentaje (%%)\n");
	orig_ret = printf("Orig: 100%%\n");
	ft_ret = ft_printf("Mine: 100%%\n");
	printf("Retornos -> Orig: %d | Mine: %d\n\n", orig_ret, ft_ret);

	return (0);
}