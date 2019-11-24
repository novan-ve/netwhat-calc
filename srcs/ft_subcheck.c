#include "netwhat_calc.h"

/* Checks whether given input is a valid submask */
/* Returns 1 if true, 0 if false */

int		ft_subcheck(char **s)
{
	int		i;
	int		len;
	int		tmp;

	i = 0;
	len = (s[4] == NULL) ? 4 : 5;
	while (i < len)
	{
		tmp = atoi(s[i]);
		if (tmp != 0 && tmp != 128 && tmp != 192 && tmp != 224 && tmp != 240)
			if (tmp != 248 && tmp != 252 && tmp != 254 && tmp != 255)
				return (0);
		i++;
	}
	i = (s[4] == NULL) ? 0 : 1;
	if (atoi(s[i]) < 255 && (atoi(s[i + 1]) != 0 || atoi(s[i + 2]) != 0 || atoi(s[i + 3]) != 0))
		return (0);
	if (atoi(s[i + 1]) < 255 && (atoi(s[i + 2]) != 0 || atoi(s[i + 3]) != 0))
		return (0);
	if (atoi(s[i + 2]) < 255 && atoi(s[i + 3]) != 0)
		return (0);
	return (1);
}
