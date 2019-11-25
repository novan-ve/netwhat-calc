/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_free.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/25 15:28:26 by novan-ve      #+#    #+#                 */
/*   Updated: 2019/11/25 15:28:28 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "netwhat_calc.h"

void	*ft_free(char **s, int i)
{
	while (i >= 0)
	{
		if (s[i])
			free(s[i]);
		i--;
	}
	if (s)
		free(s);
	return (NULL);
}
