/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salperez <salperez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:24:15 by salperez          #+#    #+#             */
/*   Updated: 2023/05/08 16:24:22 by salperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int	ft_printf(char const *str, ...);
void	ft_printfunctions(va_list args, char *str, size_t *i);
void	ft_putchari(int c, size_t *i);
void ft_putstri(char *str, size_t *i);
void ft_putnbri(int n, size_t *i);
void ft_puthexalli(unsigned long int	n, char *hexa, size_t *i);
void ft_putunsigi(unsigned int n, size_t *i);



#endif
