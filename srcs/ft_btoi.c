/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_btoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/25 19:32:47 by novan-ve      #+#    #+#                 */
/*   Updated: 2019/11/25 19:33:00 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "netwhat_calc.h"

int		ft_btoi(char *bin)
{
	int		nb;
	int		f;
	int		i;

	f = 128;
	i = 0;
	nb = 0;
	while (bin[i] != '\0')
	{
		if (bin[i] == '1')
			nb += f;
		i++;
		f /= 2;
	}
	return (nb);
}
