/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnowell <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 19:59:43 by rnowell           #+#    #+#             */
/*   Updated: 2016/09/27 19:59:44 by rnowell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*result;

	if (!s || start + len > ft_strlen(s))
		return (NULL);
	result = ft_strnew(len);
	if (!result)
		return (NULL);
	return (ft_strncpy(result, s + start, len));
}
