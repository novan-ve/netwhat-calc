/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_net.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/25 19:45:57 by novan-ve      #+#    #+#                 */
/*   Updated: 2019/11/25 20:53:46 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "netwhat_calc.h"

void	ft_host(char **s, int p, int c)
{
	int		nb;
	char	bin[9];
	int		i;

	i = 8;
	strcpy(bin, ft_itob(atoi(s[p])));
	while (c >= 0)
	{
		bin[i] = '0';
		i--;
		c--;
	}
	nb = ft_btoi(bin);
	printf("Host address:\t\t\t%s", CYN);
	if (p == 0)
		printf("%d.0.0.0%s\n", nb, RESET);
	if (p == 1)
		printf("%s.%d.0.0%s\n", s[0], nb, RESET);
	if (p == 2)
		printf("%s.%s.%d.0%s\n", s[0], s[1], nb, RESET);
	if (p == 3)
		printf("%s.%s.%s.%d%s\n", s[0], s[1], s[2], nb, RESET);
}

void	ft_broad(char **s, int p, int c)
{
	int		nb;
	char	bin[9];
	int		i;

	i = 8;
	strcpy(bin, ft_itob(atoi(s[p])));
	while (c >= 0)
	{
		bin[i] = '1';
		i--;
		c--;
	}
	nb = ft_btoi(bin);
	printf("Broadcast:\t\t\t%s", CYN);
	if (p == 0)
		printf("%d.255.255.255%s\n", nb, RESET);
	if (p == 1)
		printf("%s.%d.255.255%s\n", s[0], nb, RESET);
	if (p == 2)
		printf("%s.%s.%d.255%s\n", s[0], s[1], nb, RESET);
	if (p == 3)
		printf("%s.%s.%s.%d%s\n", s[0], s[1], s[2], nb, RESET);
}

void	ft_min(char **s, int p, int c)
{
	int		nb;
	char	bin[9];
	int		i;

	i = 8;
	strcpy(bin, ft_itob(atoi(s[p])));
	while (c >= 0)
	{
		bin[i] = '0';
		i--;
		c--;
	}
	nb = ft_btoi(bin);
	printf("HostMin:\t\t\t%s", CYN);
	if (nb == 255 && p == 3)
		printf("%s.%s.%s.%s%s\n", s[0], s[1], s[2], s[3], RESET);
	else if (p == 0)
		printf("%d.0.0.1%s\n", nb, RESET);
	else if (p == 1)
		printf("%s.%d.0.1%s\n", s[0], nb, RESET);
	else if (p == 2)
		printf("%s.%s.%d.1%s\n", s[0], s[1], nb, RESET);
	else if (p == 3)
		printf("%s.%s.%s.%d%s\n", s[0], s[1], s[2], nb + 1, RESET);
}

void	ft_max(char **s, int p, int c)
{
	int		nb;
	char	bin[9];
	int		i;

	i = 8;
	strcpy(bin, ft_itob(atoi(s[p])));
	while (c >= 0)
	{
		bin[i] = '1';
		i--;
		c--;
	}
	nb = ft_btoi(bin);
	printf("HostMax:\t\t\t%s", CYN);
	if (p == 3 && nb == atoi(s[p]))
		printf("%s.%s.%s.%d%s\n", s[0], s[1], s[2], nb, RESET);
	else if (p == 0)
		printf("%d.255.255.254%s\n", nb, RESET);
	else if (p == 1)
		printf("%s.%d.255.254%s\n", s[0], nb, RESET);
	else if (p == 2)
		printf("%s.%s.%d.254%s\n", s[0], s[1], nb, RESET);
	else if (p == 3)
		printf("%s.%s.%s.%d%s\n", s[0], s[1], s[2], nb - 1, RESET);
}

void	ft_net(char **s, int c)
{
	int		p;
	int		i;

	i = 0;
	if (c > 24)
	{
		p = 3;
		c -= 24;
	}
	else if (c > 16 && c <= 24)
	{
		p = 2;
		c -= 16;
	}
	else if (c > 8 && c <= 16)
	{
		p = 1;
		c -= 8;
	}
	else
		p = 0;
	ft_host(s, p, 8 - c);
	ft_broad(s, p, 8 - c);
	ft_min(s, p, 8 - c);
	ft_max(s, p, 8 - c);
}
