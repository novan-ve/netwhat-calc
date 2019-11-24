#ifndef NETWHAT_CALC_
# define NETWHAT_CALC_
# define RED	"\x1B[91m"
# define GRN	"\x1B[1;92m"
# define YEL	"\x1B[1;93m"
# define CYN	"\x1B[1;96m"
# define BLU	"\x1B[1;34m"
# define ITL	"\x1B[3m"
# define BLD	"\x1B[1m"
# define UND	"\x1B[4m"
# define RESET	"\x1B[0m"

# include <stdio.h>
# include <math.h>
# include <string.h>
# include <stdlib.h>

void	ft_check(char *s);
char	**ft_split(char const *s, char c);
void	*ft_free(char **s, int i);
int		ft_count(char *s, char c);
int		ft_format(char *s);
int		ft_subcheck(char **s);
char	ft_ipcheck(char **s);
void	ft_cidr(char *s);
void	ft_subcalc(char *s);
void	ft_submask(char **s, char *str);
void	ft_ip(char **s, char *str);
int		ft_ispublic(char **s);

#endif
