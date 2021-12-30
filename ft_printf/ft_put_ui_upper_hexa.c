#include "ft_printf.h"
#include "libft.h"

int	ft_put_ui_upper_hexa(unsigned int n)
{
	char	*str;
	size_t	count_chars;

	str = func_unsigned_itoa_base(n, UPPER_HEXBASE);
	ft_putstr_fd(str, 1);
	count_chars = ft_strlen(str);
	free(str);
	return (count_chars);
}
