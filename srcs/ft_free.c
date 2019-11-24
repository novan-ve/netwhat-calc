# include "netwhat_calc.h"

/* Frees multidimensional array */

void	*ft_free(char **s, int i)
{
    while (i >= 0)
    {
		if (s[i])
        	free(s[i]);
        i--;
    }
	if (s)
		free(s);
    return (NULL);
}
