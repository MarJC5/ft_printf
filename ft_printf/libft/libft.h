/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 21:30:49 by jmartin           #+#    #+#             */
/*   Updated: 2021/10/22 12:53:22 by jmartin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);

int		ft_toupper(int c);
int		ft_tolower(int c);

int		ft_atoi(const char *str);

int		ft_strncmp(const char *s1, const char *s2, size_t n);

int		ft_memcmp(const void *s1, const void *s2, size_t n);

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *str, int fd);
void	ft_putendl_fd(char *str, int fd);
void	ft_putnbr_fd(int n, int fd);

void	ft_striteri(char *str, void (*f)(unsigned int, char*));

void	*ft_calloc(size_t ecount, size_t esize);

void	*ft_memchr(const void *str, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memset(void *buf, int c, size_t n);

void	ft_bzero(void *buf, size_t n);

char	*ft_itoa(int n);

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char));
char	*ft_substr(const char *str, unsigned int start, size_t len);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strdup(const char *str);
char	*ft_strrchr(const char *str, int c);
char	*ft_strchr(const char *str, int c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *str, char c);

size_t	ft_strlcat(char *dst, const char *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t n);
size_t	ft_strlen(const char *str);

#endif
