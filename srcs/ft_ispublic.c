/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ispublic.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/25 15:28:39 by novan-ve      #+#    #+#                 */
/*   Updated: 2019/11/25 15:31:24 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "netwhat_calc.h"

int		ft_ispublic(char **s)
{
	int		i1;
	int		i2;

	i1 = atoi(s[0]);
	i2 = atoi(s[1]);
	if (i1 == 10)
		return (0);
	else if ((i1 == 172 && i2 >= 16 && i2 <= 31) || (i1 == 192 && i2 == 168))
		return (0);
	else
		return (1);
}
