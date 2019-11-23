# include "netwhat_calc.h"

int		ft_slash(char *s)
{
	int		i;
	int		check;

	i = 0;
	check = 0;
	while (s[i])
	{
		if (s[i] == '/')
			check++;
		i++;
	}
	return (check);
}

int		ft_format(char *s)
{
	int		i;

	i = 0;
	if (ft_slash(s) > 1)
		return (0);
	while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
		i++;
	if (s[i] == '\n')
		return (0);
	if (s[i] == '/')
		if ((s[i + 1] >= '0' && s[i + 1] <= '9') || s[i + 1] == ' ')
			i++;
	while (s[i] != '\n')
	{
		if (s[i] == '.' || s[i] == '/')
		{
			if (s[i + 1] < '0' || s[i + 1] > '9')
				return (0);
		}
		else if (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
		{
			if (s[i + 1] >= '0' && s[i + 1] <= '9')
				return (0);
		}	
		else if ((s[i] < '0' || s[i] > '9'))
			return (0);
		i++;
	}
	return (1);
}

void	ft_check(char *s)
{
	int		i;

	i = 0;
	if (ft_format(s) != 0)
	{
		printf("\n%sValid%s\n\n", GRN, RESET);
	}
	else
		printf("\n%sInvalid%s\n\n", RED, RESET);
}
