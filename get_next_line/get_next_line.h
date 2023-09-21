/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomes-l <bgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:04:18 by bgomes-l          #+#    #+#             */
/*   Updated: 2023/09/15 17:04:18 by bgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char	*get_next_line(int fd);
char	*ft_strchr(const char *s, int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	ft_strlcpy(char *dst, const char *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_findchr(const char *s, char c);
char	*ft_line(char *temp, char *x, char *remainder, char *buffer);
char	*read_check(int bytes_read, char *remainder, char *buffer, char *temp);
void	ft_strconcat(char **temp, char **x, char *remainder, char *buffer);

#endif
