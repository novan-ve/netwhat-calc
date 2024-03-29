/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_subcalc.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/25 15:37:35 by novan-ve      #+#    #+#                 */
/*   Updated: 2019/11/25 15:38:08 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "netwhat_calc.h"

int		ft_ctos(int i)
{
	if (i == 8)
		return (255);
	else if (i == 0)
		return (0);
	else
		return (256 - (int)pow(2, 8 - i));
}

void	ft_subcalc(char *s)
{
	int		r;
	int		count;

	r = atoi(s);
	printf("Subnet mask:\t\t\t");
	if (r > 24)
		printf("%s255.255.255.%d%s", CYN, ft_ctos(r - 24), RESET);
	else if (r > 16 && r <= 24)
		printf("%s255.255.%d.0%s", CYN, ft_ctos(r - 16), RESET);
	else if (r > 8 && r <= 16)
		printf("%s255.%d.0.0%s", CYN, ft_ctos(r - 8), RESET);
	else
		printf("%s%d.0.0.0%s", CYN, ft_ctos(r), RESET);
	printf("\n");
}
