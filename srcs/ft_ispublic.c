# include "netwhat_calc.h"

/* Returns 0 if ip is private, */
/* returns not zero if ip is public */

int		ft_ispublic(char **s)
{
	int		i1;
	int		i2;

	i1 = atoi(s[0]);
	i2 = atoi(s[1]);
	return (!(i1 == 10 || (i1 == 172 && i2 >= 16 && i2 <= 31) || (i1 == 192 && i2 == 168)));
}
