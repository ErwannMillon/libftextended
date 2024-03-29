/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmillon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 19:10:44 by gmillon           #+#    #+#             */
/*   Updated: 2022/11/16 09:15:17 by gmillon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int		ft_str_is_num(char *s);
void	*ft_realloc(void *old, size_t old_size, size_t new_size);
void	ft_print_str_arr(char **arr);
char	**ft_copy_split(char **arr);
int		arr_len(char **arr);
char	**str_arg_split(char const *s, char c);
char	*ft_join_arr_by_str(char **arr, char *str_delimiter);
char	**double_pointer_realloc(char **old, int new_size);
int		ft_string_is_num(char *str);
int		ft_get_arr_index(int search, int *arr, int size);
void	ft_print_arr(int *arr, int size);
void	ft_bubble_sort(int *tab, int size);
int		*ft_bubble_sort_copy(int *tab, int size);
char	*buffer_realloc(char *old, int buff_size);
char	*get_next_line(int fd);
void	ft_lstclear(t_list **lst, void (*del)(void *));
char	*ft_strrchr(char *str, int c);
void	ft_bzero(void *s, int n);
void	*ft_calloc(size_t nitems, size_t size);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isalpha(char c);
int		ft_islower(int c);
int		ft_isprint(int c);
int		ft_isdigit(char c);
int		ft_isupper(int c);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memset(void *dest, int c, size_t len);
int		ft_memcmp(const void *p1, const void *p2, size_t size);
void	*ft_memcpy_alloc(const void *src, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
char	*ft_strchr(const char *str, int c);
int		ft_strlen(const char *s);
char	*ft_strncat(char *dest, char *src, int n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(char *str, char *to_find, size_t n);
char	*ft_strrchr(char *str, int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
char	*ft_strdup(char *src);
void	*ft_memmove(void *dest, const void *src, size_t len);
void	*ft_memmove_free(void *dest, void *src, size_t len);
int		ft_strchr_index(char *str, int c);
int		ft_atoi(const char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
int		ft_lstsize(t_list *lst);

#endif 