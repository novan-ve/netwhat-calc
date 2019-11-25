/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_count.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/25 14:49:19 by novan-ve      #+#    #+#                 */
/*   Updated: 2019/11/25 14:49:28 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "netwhat_calc.h"

int		ft_count(char *s, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}
