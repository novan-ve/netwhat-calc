# include "netwhat_calc.h"

int	main(void)
{
	char	input[50];
	char	ask[25] = "Enter IPv4/submask/CIDR:";
	char	exit[21] = "(Type 'exit' to quit)";

	printf("%s%s\t\t\t\t%s%s\n%s> ", YEL, ask, ITL, exit, RESET);
	fgets(input, 51, stdin);
	while (strcmp(input, "exit\n") != 0)
	{
		if (input[0] != '\n')
			ft_check(input);
		printf("%s%s\t\t\t\t%s%s\n%s> ", YEL, ask, ITL, exit, RESET);
		fgets(input, 51, stdin);
	}
	return (0);
}
