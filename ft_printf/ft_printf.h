#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

# define LOWER_HEXBASE "0123456789abcdef" 
# define UPPER_HEXBASE "0123456789ABCDEF" 

int		ft_printf(const char *input, ...);
int		ft_put_char(int c);
int		ft_put_str(char *str);
int		ft_put_pointer_hexa(void *ptr);
char	*func_unsigned_ltoa_base(unsigned long n, char *base);
int		ft_put_integer(int n);
int		ft_put_ui_decimal(unsigned int n);
char	*func_unsigned_itoa(unsigned int n);
int		ft_put_ui_lower_hexa(unsigned int n);
int		ft_put_ui_upper_hexa(unsigned int n);
char	*func_unsigned_itoa_base(unsigned int n, char *base);
int		ft_put_percent(void);

#endif