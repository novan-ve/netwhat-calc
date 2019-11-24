# include "netwhat_calc.h"

void	ft_cidr(char *s)
{
	char	sub[50];

	if (s[0] == '/')
		s++;
	printf("\n%s%sCIDR:%s\n\n", CYN, UND, RESET);
	ft_subcalc(s);
	printf("Total Addresses:\t\t%s%lld%s\n", CYN, (unsigned long long)pow(2, 32 - atoi(s)), RESET);
	if (atoi(s) != 0 && atoi(s) != 32)
		printf("Available Adresses:\t\t%s%lld%s\n\n", CYN, (unsigned long long)pow(2, 32 - atoi(s)) - 2, RESET);
}
