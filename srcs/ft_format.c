# include "netwhat_calc.h"

/* Returns 1 if the given string is a valid IP address, CIDR notation or submask */
/* Otherwise it returns 0 */

int		ft_format(char *s)
{
	int		i;

	i = 0;
	if (ft_count(s, '/') > 1 || s[0] == '.')
		return (0);
	if (ft_count(s, '.') != 4 && ft_count(s, '.') != 3 && ft_count(s, '.') != 0)
		return (0);
	if (s[i] == '/')
	{
		if (s[i + 1] >= '0' && s[i + 1] <= '9')
			i++;
		else
			return (0);
	}
	else if (ft_count(s, '.') == 0 && ft_count(s, '/') == 1)
		return (0);
	if (ft_count(s, '.') == 0 && (atoi(s + i) < 0 || atoi(s + i) > 32))
		return (0);
	while (s[i] != '\n')
	{
		if (s[i] == '.' || s[i] == '/')
		{
			if (s[i + 1] < '0' || s[i + 1] > '9')
				return (0);
			if (s[i] == '/' && (ft_count(s + i, '.') != 0 || atoi(s + i + 1) > 32 || atoi(s + i + i) < 0))
				return (0);
			if (s[i] == '.' && (atoi(s + i + 1) > 255 || atoi(s + i + 1) < 0))
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
