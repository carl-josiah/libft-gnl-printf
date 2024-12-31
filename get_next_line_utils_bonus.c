/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastro <ccastro@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 00:34:00 by ccastro           #+#    #+#             */
/*   Updated: 2024/12/31 16:23:04 by ccastro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	gnl_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*gnl_strdup(const char *str)
{
	int		i;
	char	*ret;

	if (str == NULL)
		return (NULL);
	i = 0;
	ret = malloc(sizeof(char) * (gnl_strlen(str) + 1));
	if (ret == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		ret[i] = str[i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

char	*gnl_strjoin(const char *str1, const char *str2)
{
	int		i;
	int		j;
	char	*ret;

	if (str1 == NULL && str2 == NULL)
		return (gnl_strdup(""));
	if (str1 == NULL)
		return (gnl_strdup(str2));
	if (str2 == NULL)
		return (gnl_strdup(str1));
	i = 0;
	j = 0;
	ret = malloc(sizeof(char) * (gnl_strlen(str1) + gnl_strlen(str2) + 1));
	if (ret == NULL)
		return (NULL);
	while (str1[i] != '\0')
	{
		ret[i] = str1[i];
		i++;
	}
	while (str2[j] != '\0')
		ret[i++] = str2[j++];
	ret[i] = '\0';
	return (ret);
}

char	*gnl_strchr(const char *str, int c)
{
	int		i;
	char	cc;

	i = 0;
	cc = (char) c;
	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] == cc)
			return ((char *) &str[i]);
		i++;
	}
	if (str[i] == cc)
		return ((char *) &str[i]);
	return (NULL);
}

char	*gnl_substr(char const *str, int start, int len)
{
	char	*ret;
	size_t	i;

	i = 0;
	if (str == NULL)
		return (NULL);
	if (start > gnl_strlen(str))
		return (gnl_strdup(""));
	if (len > gnl_strlen(str + start))
		len = gnl_strlen(str + start);
	ret = (char *) malloc(sizeof(char) * (len + 1));
	if (ret == NULL)
		return (NULL);
	while (len--)
		ret[i++] = str[start++];
	ret[i] = '\0';
	return (ret);
}
