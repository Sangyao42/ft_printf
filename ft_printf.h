/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawang <sawang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:00:33 by sawang            #+#    #+#             */
/*   Updated: 2022/11/08 19:23:10 by sawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include "libft/libft.h"

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putptr(void *ptr, int *spec_counter);
int	ft_putnbr(int n, int *spec_counter);
int	ft_putnbr_unsigned(unsigned int n, int *spec_counter);
int	ft_putnbr_hex_lower(unsigned int n, int *spec_counter);
int	ft_putnbr_hex_upper(unsigned int n, int *spec_counter);
int	spec_write(va_list arg_list, const char c);
int	ft_printf(const char *format, ...);

#endif
