# libft42

This project recreates several functions from the C standard library. Allowed functions for this project include 
malloc, free, and write.

## Functions

** print to file **
-these functions allow a user to specify the output file descriptor

ft_putchar_fd
ft_putstr_fd
ft_putnbr_base_fd *-puts number, with base specified by the user.*
ft_putnbr_fd
ft_putendl_fd
ft_set_print_color_to *-for testing and debugging*

** print to standard output/error **

ft_putchar
ft_putstr
ft_putstr_digits
ft_putendl
ft_putnbr
ft_puterr

** analyze char **

ft_isdigit
ft_isalpha
ft_isupper
ft_islower
ft_isprint
ft_isascii
ft_isalnum
ft_isspace
ft_isspacelinetab
ft_toupper
ft_tolower
ft_trans_toupper
ft_trans_tolower

** analyze string **

ft_strlen
ft_strlen_until *-string length until specified character is found in source string*
ft_strcpy
ft_strncpy *-copy n bytes of a string*
ft_strdup
ft_strdup_until *-duplicate string until specified character is found in source string*
ft_strcat
ft_strncat
ft_strlcat
ft_strcmp
ft_strncmp
ft_strchr
ft_strrchr
ft_strstr
ft_strnstr
ft_skip_spaces
ft_skip_delim
ft_strnew
ft_strdel
ft_strclr
ft_striter
ft_striteri
ft_strmap
ft_strmapi
ft_strequ
ft_strnequ
ft_strsub
ft_strjoin
ft_strltrim
ft_strrtrim
ft_strtrim
ft_strsplit
ft_wordcount
ft_strrev

** int **

ft_atoi
ft_atoi_base
ft_itoa
ft_itoa_base
ft_count_digits

**memory**

ft_memset
ft_memcpy
ft_memccpy
ft_memmove
ft_memchr
ft_bzero
ft_memcmp
ft_memalloc
ft_memdel

**list**

ft_lstnew
ft_lstdelone
ft_lstdel
ft_lstadd
ft_lstiter
ft_lstmap


**functions for t_struct list (defined in libft.h)**

ft_lst_clone
ft_lst_push_back
ft_create_elem
ft_lstdel_if
ft_lstdel_tstruct
ft_lstdelone_tstruct

#endif

## Authors

* **Robert Nowell** (https://github.com/robertnowell)

## Acknowledgments

* This project was completed at School 42, Fremont
