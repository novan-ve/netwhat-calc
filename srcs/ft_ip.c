/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ip.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/25 15:31:38 by novan-ve      #+#    #+#                 */
/*   Updated: 2019/11/25 15:33:13 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "netwhat_calc.h"

void	ft_ip(char **s, char *str)
{
	printf("\n%s%sIPv4 address:%s\t\t\t%s%s", CYN, UND, RESET, CYN, str);
	printf("%s\n\n", RESET);
	if (ft_ipcheck(s) == 'L')
		printf("IP class:\t\t\t%sLocal%s\n\n", CYN, RESET);
	else
		printf("IP class:\t\t\t%s%c%s\n", CYN, ft_ipcheck(s), RESET);
	if (ft_ipcheck(s) == 'A' || ft_ipcheck(s) == 'B' || ft_ipcheck(s) == 'C')
	{
		if (ft_ispublic(s) != 0)
			printf("IP type:\t\t\t%spublic%s\n\n", CYN, RESET);
		else
			printf("IP type:\t\t\t%sprivate%s\n\n", CYN, RESET);
	}
}
