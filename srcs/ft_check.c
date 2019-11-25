/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_check.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/25 13:07:06 by novan-ve      #+#    #+#                 */
/*   Updated: 2019/11/25 17:19:56 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "netwhat_calc.h"

void	ft_checkloop(char **input, char *s)
{
	char	str[45];

	strcpy(str, "Invalid: submask can't be combined with CIDR");
	if (ft_subcheck(input) == 1)
	{
		if (ft_count(s, '/') == 0)
			ft_submask(input, s);
		else
			printf("\n%s%s%s\n\n", RED, str, RESET);
	}
	else if (ft_ipcheck(input))
	{
		if (ft_count(s, '/') == 1)
			ft_ipcidr(input, s);
		else
			ft_ip(input, s);
	}
	else
		printf("\n%sInvalid IP or Submask%s\n\n", RED, RESET);
	ft_free(input, ft_count(s, '.'));
}

void	ft_check(char *s)
{
	int		i;
	char	**input;

	i = 0;
	if (ft_format(s) != 0)
	{
		while (s[i] != '\n')
			i++;
		s[i] = '\0';
		if (ft_count(s, '.'))
		{
			input = ft_split(s, '.');
			if (input)
				ft_checkloop(input, s);
			else
				printf("\n%s[Allocation error]%s\n\n", RED, RESET);
		}
		else
			ft_cidr(s);
	}
	else
		printf("\n%sInvalid input%s\n\n", RED, RESET);
}
