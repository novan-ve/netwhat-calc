/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_format.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/25 15:43:23 by novan-ve      #+#    #+#                 */
/*   Updated: 2019/11/25 18:37:17 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "netwhat_calc.h"

int		ft_formatloop2(char *s, int i)
{
	if (s[i + 1] < '0' || s[i + 1] > '9')
		return (0);
	if (s[i] == '/')
	{
		if (ft_count(s + i, '.') != 0 || atoi(s + i + 1) > 32)
			return (0);
		else if (atoi(s + i + i) < 0)
			return (0);
	}
	if (s[i] == '.' && (atoi(s + i + 1) > 255 || atoi(s + i + 1) < 0))
		return (0);
	return (1);
}

int		ft_formatloop(char *s, int i)
{
	if (i == 0 && s[i] == '0' && s[i + 1] == 0)
		return (0);
	if (i != 0 && s[i] == '0')
		if (s[i + 1] == '0' && s[i - 1] != '1' && s[i - 1] != '2')
			return (0);
	if (s[i] == '.' || s[i] == '/')
	{
		if (!ft_formatloop2(s, i))
			return (0);
	}
	else if (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
	{
		if (s[i + 1] >= '0' && s[i + 1] <= '9')
			return (0);
	}
	else if (s[i] < '0' || s[i] > '9')
		return (0);
	return (1);
}

int		ft_format(char *s)
{
	int		i;

	i = 0;
	if (ft_count(s, '/') > 1 || s[0] == '.')
		return (0);
	if (ft_count(s, '.') != 4 && ft_count(s, '.') != 3 && ft_count(s, '.') != 0)
		return (0);
	if (s[i] == '/' && s[i + 1] >= '0' && s[i + 1] <= '9')
		i++;
	else if (s[i] == '/' && (s[i + 1] < '0' || s[i + 1] > '9'))
		return (0);
	else if (ft_count(s, '.') == 0 && ft_count(s, '/') == 1)
		return (0);
	if (atoi(s + i) < 0 || atoi(s + i) > 255)
		return (0);
	if (ft_count(s, '.') == 0 && (atoi(s + i) < 0 || atoi(s + i) > 32))
		return (0);
	while (s[i] != '\n')
	{
		if (!ft_formatloop(s, i))
			return (0);
		i++;
	}
	return (1);
}
