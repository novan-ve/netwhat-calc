/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ipcheck.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/25 15:36:55 by novan-ve      #+#    #+#                 */
/*   Updated: 2019/11/25 15:37:21 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "netwhat_calc.h"

char		ft_ipcheck(char **s)
{
	int		i1;
	int		i2;
	int		i3;
	int		i4;

	i1 = atoi(s[0]);
	i2 = atoi(s[1]);
	i3 = atoi(s[2]);
	i4 = atoi(s[3]);
	if (i1 >= 1 && i1 <= 126)
		return ('A');
	if (i1 >= 128 && i1 <= 191)
		return ('B');
	if (i1 >= 192 && i1 <= 223)
		return ('C');
	if (i1 >= 224 && i1 <= 239)
		return ('D');
	if (i1 >= 240)
		return ('E');
	if (i1 == 127)
		return ('L');
	return (0);
}
