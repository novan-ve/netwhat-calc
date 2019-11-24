# include "netwhat_calc.h"

/* Checks whether input is a valid IP address, CIDR notation or Submask and sents it to the corresponding functions */
/* Otherwise it prints 'Invalid' */

void	ft_check(char *s)
{
	int		i;
	char	**input;

	i = 0;
	if (ft_format(s) != 0)
	{
		while (s[i] != '\n')
			i++;
		s[i] = '\0';
		if (ft_count(s, '.'))
		{
			input = ft_split(s, '.');
			if (input)
			{
				if (ft_subcheck(input) == 1)
				{
					if (ft_count(s, '/') == 0)
						printf("Submask\n\n");
					else
						printf("\n%sInvalid: submask can't be combined with CIDR%s\n\n", RED, RESET);
				}
				else if (ft_ipcheck(input))
				{
					if (ft_count(s, '/') == 1)
						printf("IPCIDR: %c\n\n", ft_ipcheck(input));
					else
						printf("IP: %c\n\n", ft_ipcheck(input));
				}
				else
					printf("\n%sInvalid IP or Submask%s\n\n", RED, RESET);
				ft_free(input, ft_count(s, '.'));
			}
			else
				printf("\n%sAllocation error, please contact creator%s\n\n", RED, RESET);
		}
		else
			ft_cidr(s);
	}
	else
		printf("\n%sInvalid input%s\n\n", RED, RESET);
}
