/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itob.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/25 19:33:13 by novan-ve      #+#    #+#                 */
/*   Updated: 2019/11/25 19:33:24 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "netwhat_calc.h"

char	*ft_itob(int nb)
{
	char	*bin;
	int		f;
	int		i;

	f = 128;
	i = 0;
	bin = (char*)malloc(sizeof(char) * 9);
	strcpy(bin, "00000000");
	while (nb > 0)
	{
		if (nb - f >= 0)
		{
			bin[i] = '1';
			nb -= f;
		}
		i++;
		f /= 2;
	}
	return (bin);
}
