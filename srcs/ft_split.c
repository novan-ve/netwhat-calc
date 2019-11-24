# include "netwhat_calc.h"

static char    *ft_substr2(char const *s, unsigned int start, size_t len)
{
    char    *str;
    void    *ptr;
    size_t    i;    i = 0;
    if (s == 0)
        return (0);
    ptr = malloc(sizeof(char) * (len + 1));
    if (ptr == 0)
        return (0);
    str = ptr;
    while (s[i] != '\0' && i < len)
    {
        str[i] = s[start];
        start++;
        i++;
    }
    str[len] = '\0';
    return (str);
}

static int    ft_words(char const *s, char c)
{
    int        index;
    int        count;    index = 0;
    count = 0;
    while (s[index] != '\0' && s[index] == c)
        index++;
    while (s[index] != '\0')
    {
        if (s[index] != c)
        {
            while (s[index] != '\0' && s[index] != c)
                index++;
            count++;
        }
        else
            index++;
    }
    return (count);
}

char        **ft_split(char const *s, char c)
{
    int        i;
    int        j;
    int        start;
    char    **result;    

	i = 0;
    j = 0;
	if (s == 0)
		return (0);
    result = (char**)malloc(sizeof(char*)*(ft_words(s, c) + 1));
    if (result == 0)
        return (0);
    while (s[i] != '\0' && ft_words > 0)
    {
        if (s[i] == c)
            i++;
        else
        {
            start = i;
            while (s[i] != '\0' && s[i] != c)
                i++;
            result[j] = ft_substr2(s, start, i - start);
            if (result[j] == 0)
                return (ft_free(result, j));
            j++;
        }
    }
    result[j] = 0;
    return (result);
}
