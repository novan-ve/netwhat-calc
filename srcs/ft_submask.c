/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_submask.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/25 15:49:00 by novan-ve      #+#    #+#                 */
/*   Updated: 2019/11/25 15:50:45 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "netwhat_calc.h"

int		stoc(char **s)
{
	int		c;
	int		i;

	c = 0;
	i = 0;
	while (i < 4)
	{
		c += 8 - (log10(256 - atoi(s[i])) / log10(2));
		i++;
	}
	return (c);
}

void	ft_submask(char **s, char *str)
{
	int					c;
	unsigned long long	r;

	if (s[4] != NULL)
		s++;
	c = stoc(s);
	r = (unsigned long long)pow(2, 32 - c);
	printf("\n%s%sSubnet mask:%s\t\t\t%s%s", CYN, UND, RESET, CYN, str);
	printf("%s\n\n", RESET);
	printf("CIDR:\t\t\t\t%s/%d%s\n", CYN, c, RESET);
	printf("Total Addresses:\t\t%s%lld%s\n", CYN, r, RESET);
	if (c == 32)
		printf("Available Adresses:\t\t%s%d%s\n\n", CYN, 0, RESET);
	else
		printf("Available Adresses:\t\t%s%lld%s\n\n", CYN, r - 2, RESET);
}
