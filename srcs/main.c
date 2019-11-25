/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/25 15:42:09 by novan-ve      #+#    #+#                 */
/*   Updated: 2019/11/25 16:12:45 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "netwhat_calc.h"

int	main(void)
{
	char	input[50];
	char	ask[28];
	char	exit[22];

	strcpy(ask, "Enter IPv4/subnetmask/CIDR:");
	strcpy(exit, "(Type 'exit' to quit)");
	printf("%s%s\t\t\t\t%s%s\n%s> ", YEL, ask, ITL, exit, RESET);
	fgets(input, 51, stdin);
	while (strcmp(input, "exit\n") != 0)
	{
		if (input[0] != '\n')
			ft_check(input);
		printf("%s%s\t\t\t\t%s%s\n%s> ", YEL, ask, ITL, exit, RESET);
		fgets(input, 51, stdin);
	}
	return (0);
}
