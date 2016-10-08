/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnowell <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 20:04:49 by rnowell           #+#    #+#             */
/*   Updated: 2016/09/27 20:04:51 by rnowell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_isspace(int c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	else
		return (0);
}

char		*ft_strtrim(char const *s)
{
	size_t	leading;
	size_t	trailing;
	size_t	i;
	char	*ret;

	if (!s)
		return (NULL);
	i = 0;
	trailing = 0;
	leading = 0;
	while (ft_isspace(*(s + i++)))
		leading++;
	i = ft_strlen(s) - 1;
	while (ft_isspace(*(s + i)))
	{
		trailing++;
		i--;
	}
	if ((ft_strlen(s) == leading))
		return (ft_strnew(1));
	ret = ft_strnew(ft_strlen(s) - trailing - leading);
	if (!ret)
		return (NULL);
	return (ft_strncpy(ret, s + leading, ft_strlen(s) - trailing - leading));
}
