# include "netwhat_calc.h"

/* Calculates and prints CIDR and amount of Available addresses for given subnet mask */

int		stoc(char **s)
{
	int		c;
	int		i;

	c = 0;
	i = 0;
	while (i < 4)
	{
		c += 8 - (log10(256 - atoi(s[i])) / log10(2));
		i++;
	}
	return (c);
}

void	ft_submask(char **s, char *str)
{
	int		c;

	if (s[4] != NULL)
		s++;
	c = stoc(s);
	printf("\n%s%sSubnet mask:%s\t\t\t%s%s%s\n\n", CYN, UND, RESET, CYN, str, RESET);
	printf("CIDR:\t\t\t\t%s/%d%s\n", CYN, c, RESET);
	printf("Total Addresses:\t\t%s%lld%s\n", CYN, (unsigned long long)pow(2, 32 - c), RESET);
	if (c == 32)
		printf("Available Adresses:\t\t%s%d%s\n\n", CYN, 0, RESET);
	else
		printf("Available Adresses:\t\t%s%lld%s\n\n", CYN, (unsigned long long)pow(2, 32 - c) - 2, RESET);
}
