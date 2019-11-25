/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_cidr.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/25 14:12:42 by novan-ve      #+#    #+#                 */
/*   Updated: 2019/11/25 15:54:21 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "netwhat_calc.h"

void	ft_cidr(char *s)
{
	unsigned long long a;

	a = (unsigned long long)pow(2, 32 - atoi(s));
	if (s[0] == '/')
		s++;
	printf("\n%s%sCIDR:%s\t\t\t\t%s/%s%s\n\n", CYN, UND, RESET, CYN, s, RESET);
	ft_subcalc(s);
	printf("Total Addresses:\t\t%s%lld%s\n", CYN, a, RESET);
	if (atoi(s) == 32)
		printf("Available Adresses:\t\t%s0%s\n\n", CYN, RESET);
	else
		printf("Available Adresses:\t\t%s%lld%s\n\n", CYN, a - 2, RESET);
}
