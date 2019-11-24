# include "netwhat_calc.h"

/* Prints the class of given ip and whether it's public or private */

void	ft_ip(char **s, char *str)
{
	printf("\n%s%sIPv4 address:%s\t\t\t%s%s%s\n\n", CYN, UND, RESET, CYN, str, RESET);
	if (ft_ipcheck(s) == 'L')
		printf("IP class:\t\t\t%sLocal%s\n\n", CYN, RESET);
	else
		printf("IP class:\t\t\t%s%c%s\n", CYN, ft_ipcheck(s), RESET);
	if (ft_ipcheck(s) == 'A' || ft_ipcheck(s) == 'B' || ft_ipcheck(s) == 'C')
	{
		if(ft_ispublic(s) != 0)
			printf("IP type:\t\t\t%spublic%s\n\n", CYN, RESET);
		else
			printf("IP type:\t\t\t%sprivate%s\n\n", CYN, RESET);
	}
}
