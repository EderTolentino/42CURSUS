#include "ft_printf.h"
#include "libft.h"

static int	count_len(unsigned int n, char *base);
static char	*convert_int(unsigned int n, int n_len, char *str, char *base);
static int	base_check(char *base, size_t len);

char	*func_unsigned_itoa_base(unsigned int n, char *base)
{
	char	*str;
	int		n_len;
	size_t	base_len;

	base_len = ft_strlen(base);
	if (base_check(base, base_len) == 0 || base_len <= 1)
		return (NULL);
	if (n == 0)
	{
		str = (char *)malloc(sizeof(char) * 2);
		str[0] = '0';
		str[1] = 0;
		return (str);
	}
	n_len = count_len(n, base);
	str = (char *)malloc(sizeof(char) * (n_len + 1));
	if (str == NULL)
		return (NULL);
	str = convert_int(n, n_len, str, base);
	return (str);
}

static int	count_len(unsigned int n, char *base)
{
	int	n_len;
	int	base_len;

	base_len = ft_strlen(base);
	n_len = 0;
	while (n)
	{
		n /= base_len;
		n_len++;
	}
	return (n_len);
}

static char	*convert_int(unsigned int n, int n_len, char *str, char *base)
{
	int		temp;
	size_t	base_len;

	base_len = ft_strlen(base);
	str[n_len--] = '\0';
	while (n != 0)
	{
		temp = n % base_len;
		str[n_len--] = base[temp];
		n = n / base_len;
	}
	return (str);
}

static int	base_check(char *base, size_t len)
{
	size_t	i;
	size_t	j;

	if (ft_strchr(base, '-') || ft_strchr(base, '+'))
		return (0);
	i = -1;
	while (++i < len)
	{
		j = i + 1;
		while (++j < len)
		{
			if (base[i] == base[j])
				return (0);
		}
	}
	return (1);
}
