#include "ft_printf.h"
#include "libft.h"

int	ft_put_str(char *str)
{
	int	count_chars;

	if (!str)
	{
		return (0);
	}
	count_chars = ft_strlen(str);
	ft_putstr_fd(str, 1);
	return (count_chars);
}
