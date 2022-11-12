#include "../src/ft_printf.h"
#include <stdio.h>
#include <limits.h>
#include <stddef.h>


int	main(void)
{
	// char	*str;
	// int		i;

	// i = 0;
	// str = "testing write()";
	// while (i < ft_strlen(str))
	// {
	// 	write(1, &str[i], 1);
	// 	i++;
	// }
	// write(1, "\n", 1);

/**
 * testing for %c
*/
	printf("testing for %%c:");
	char str1[] = "%c\ntesting with specifier, length 36\n";
	int i_char = ft_printf(str1, 'a');
	printf("%d\n", i_char);

	printf("\n");
/**
 * testing for %s
*/
	printf("testing for %%s:");
	int	i_str = ft_printf("str %s has length 26.\n", "string");
	printf("%d\n", i_str);
	printf("@%d\n", printf("str %s has length 26.\n", "string"));

	int	i_str_null = ft_printf("@%s\n", NULL);
	printf("%d\n", i_str_null);
	printf("%d\n", printf("@%s\n", NULL));

	printf("\n");
/**
 * testing for %i and %d
*/
	printf("testing for %%i and %%d:");
	int	i_int_basic = ft_printf("interger %i has length 28.\n", 987);
	printf("%d\n", i_int_basic);

	int i_int_negative = ft_printf("negative integer %i has length 36\n", -987);
	printf("%d\n", i_int_negative);

	int i_int_intmin = ft_printf("min interger %i has length 39\n", -2147483648);
	printf("%d\n", i_int_intmin);

	int	i_dec_basic = ft_printf("dec_nbr %d has length 27.\n", 987);
	printf("%d\n", i_dec_basic);

	int i_dec_negative = ft_printf("negative dec_nbr %d has length 36\n", -987);
	printf("%d\n", i_dec_negative);

	int i_dec_intmin = ft_printf("min dec_nbr %d has length 38\n", -2147483648);
	printf("%d\n", i_dec_intmin);

	printf("\n");
/**
 * testing for %u
*/
	printf("testing for %%u:");
	int	i_unsigned_basic = ft_printf("unsigned_int %u has length 32.\n", 987);
	printf("%d\n", i_unsigned_basic);

	int i_unsigned_negative = ft_printf("negative unsigned_int %u has length ?\n", -987);
	printf("%d\n", i_unsigned_negative);
	printf("@%d\n", printf("negative unsigned_int %u has length ?\n", -987));

	int i_unsigned_minusone = ft_printf("unsigned max: %u\n", 4294967295);
	printf("%d\n", i_unsigned_minusone);

	int i_unsigned_intmin = ft_printf("min unsigned_int %u has length ?\n", -2147483648);
	printf("%d\n", i_unsigned_intmin);
	// printf("@%d\n", printf("min unsigned_int %u has length ?\n", -2147483648));

	int i_unsigned_zero = ft_printf("zero %u has length ?\n", 0);
	printf("%d\n", i_unsigned_zero);
	printf("@%d\n", printf("zero %u has length ?\n", 0));

	int i_unsigned_max = ft_printf("unsigned max: %u\n", 4294967295);
	printf("%d\n", i_unsigned_max);

	ft_printf("!%u\n", -1);

	printf("\n");
/**
 * testing for %x and %X
*/
	printf("testing for %%x and %%X:\n");
	ft_printf("%X\n", 33);
	printf("return value: %d\n",printf("%X\n", 33));

	ft_printf("%X\n", -1);
	printf("return value: %d\n",printf("%X\n", -1));

	ft_printf("%X\n", 4294967295);
	printf("return value: %d\n",printf("%lX\n", 4294967295));
	printf("!%X\n", UINT_MAX);

	ft_printf("%X\n", 15);
	printf("return value: %d\n",printf("%X\n", 15));

	ft_printf("%X\n", 0);
	printf("return value: %d\n",printf("%X\n", 0));

	ft_printf("%X\n", -2147483648);
	printf("return value: %d\n",printf("%lX\n", -2147483648));
	ft_printf("!@%X\n", (INT_MIN));

	// ft_printf("%X\n", -2147483647);
	// printf("return value: %d\n",printf("%X\n", -2147483647));
	// printf("!%d\n", INT_MIN);
	printf("!%X\n", INT_MIN);

	printf("\n");
/**
 * testing for %p
*/
	printf("testing for %%p:\n");
	// int	*test;
	// int	*test2;

	int a = 1;
	int b = 2;
	// test = &a;
	// test2 = &b;
	printf("%p\n", (void *)&a);
	// printf("%#lx\n", SIZE_MAX);
	printf("%lu\n", sizeof(void *));
	printf("%lu\n", sizeof(unsigned int));
	printf("%p\n", &b);
	// printf("%lu\n", sizeof(test2));
	ft_printf("%p\n", &a);
	ft_printf("%p\n", &b);

	printf("\n");
/**
 * testing for %%
*/
	printf("testing for %%%%:\n");
	ft_printf("%%\n");

	ft_printf("\n");
/**
 * testing for mixed
*/
	printf("testing for mixed specifiers:\n");
	int size_mixed_ft = ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%\n", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42,0);
	int size_mixed = printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%\n", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
	printf("%d\n", size_mixed_ft);
	printf("%d\n", size_mixed);

	printf("\n");

	return (0);
}
