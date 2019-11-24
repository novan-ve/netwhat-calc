# include "netwhat_calc.h"

/* Prints the submask and amount of available Addresses of a CIDR code */

void	ft_cidr(char *s)
{
	if (s[0] == '/')
		s++;
	printf("\n%s%sCIDR:%s\t\t\t\t%s/%s%s\n\n", CYN, UND, RESET, CYN, s, RESET);
	ft_subcalc(s);
	printf("Total Addresses:\t\t%s%lld%s\n", CYN, (unsigned long long)pow(2, 32 - atoi(s)), RESET);
	if (atoi(s) == 32)
		printf("Available Adresses:\t\t%s0%s\n\n", CYN, RESET);
	else
		printf("Available Adresses:\t\t%s%lld%s\n\n", CYN, (unsigned long long)pow(2, 32 - atoi(s)) - 2, RESET);
}
