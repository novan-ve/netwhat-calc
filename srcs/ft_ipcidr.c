/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ipcidr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/25 17:20:03 by novan-ve      #+#    #+#                 */
/*   Updated: 2019/11/25 20:13:50 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "netwhat_calc.h"

void	ft_ipcidr2(char **s)
{
	if (ft_ispublic(s) != 0)
		printf("IP type:\t\t\t%spublic%s\n\n", CYN, RESET);
	else
		printf("IP type:\t\t\t%sprivate%s\n\n", CYN, RESET);
}

void	ft_ipcidr(char **s, char *str)
{
	int					c;
	int					i;
	unsigned long long	a;

	i = 0;
	printf("\n%s%sIPv4 address:%s\t\t\t%s%s", CYN, UND, RESET, CYN, str);
	printf("%s\n\n", RESET);
	while (*(str) != '/')
		str++;
	str++;
	c = atoi(str);
	a = (unsigned long long)pow(2, 32 - c);
	printf("CIDR:\t\t\t\t%s/%d%s\n", CYN, c, RESET);
	ft_subcalc(str);
	ft_net(s, c);
	printf("Total addresses:\t\t%s%lld%s\n", CYN, a, RESET);
	if (c == 32)
		printf("Available adresses:\t\t%s0%s\n", CYN, RESET);
	else
		printf("Available adresses:\t\t%s%lld%s\n", CYN, a - 2, RESET);
	if (ft_ipcheck(s) == 'L')
		printf("IP class:\t\t\t%sLocal%s\n\n", CYN, RESET);
	else
		printf("IP class:\t\t\t%s%c%s\n", CYN, ft_ipcheck(s), RESET);
	ft_ipcidr2(s);
}
