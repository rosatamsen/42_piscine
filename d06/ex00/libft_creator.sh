gcc -c -Wall -Werror -Wextra ft_*.c
ar rc libft.a *.o
ranlib libft.a
rm ft_*.o
