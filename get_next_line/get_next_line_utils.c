/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgomes-l <bgomes-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:03:02 by bgomes-l          #+#    #+#             */
/*   Updated: 2023/09/15 17:03:02 by bgomes-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	char_to_set;

	ptr = (unsigned char *)s;
	char_to_set = (unsigned char)c;
	while (n > 0)
	{
		*ptr = char_to_set;
		ptr++;
		n--;
	}
	return (s);
}

char	*ft_strchr(const char *s, int c)
{
	unsigned char	char_to_find;

	char_to_find = (char)c;
	while (*s != char_to_find)
	{
		if (*s == '\0')
		{
			return (NULL);
		}
		s++;
	}
	return ((char *)(s));
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_string;
	size_t	i;
	size_t	j;
	size_t	s_len;

	j = 0;
	i = start;
	s_len = ft_findchr(s, '\0');
	if (start >= s_len)
	{
		sub_string = (char *)malloc(1);
		if (sub_string == NULL || s == NULL)
			return (NULL);
		sub_string[0] = '\0';
		return (sub_string);
	}
	if (len > s_len - start)
		len = s_len - start;
	sub_string = (char *)malloc(len + 1);
	if (sub_string == NULL)
		return (NULL);
	while (i < start + len)
		sub_string[j++] = s[i++];
	sub_string[j] = '\0';
	return (sub_string);
}

void	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n > 0)
	{
		while (src[i] && i < (n - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total_len;
	char	*new_str;
	char	*start;

	total_len = ft_findchr(s1, '\0') + ft_findchr(s2, '\0');
	new_str = (char *)malloc(total_len + 1);
	if (new_str == NULL || s1 == NULL || s2 == NULL)
		return (NULL);
	start = new_str;
	while (*s1)
		*new_str++ = *s1++;
	while (*s2)
		*new_str++ = *s2++;
	*new_str = '\0';
	return (start);
}
